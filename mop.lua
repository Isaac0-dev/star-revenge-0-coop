
---@diagnostic disable: param-type-mismatch, assign-type-mismatch

-----------------------------
-----Localized Functions-----
-----------------------------

-- Improves performance, which is needed since this is a lot of code to run
local play_sound = play_sound
local spawn_non_sync_object = spawn_non_sync_object
local obj_copy_pos_and_angle = obj_copy_pos_and_angle
local obj_set_model_extended = obj_set_model_extended
local network_init_object = network_init_object
local network_send_object = network_send_object
local obj_check_if_collided_with_object = obj_check_if_collided_with_object
local set_mario_action = set_mario_action
local cur_obj_was_attacked_or_ground_pounded = cur_obj_was_attacked_or_ground_pounded
local load_object_collision_model = load_object_collision_model
local cur_obj_is_mario_on_platform = cur_obj_is_mario_on_platform
local spawn_mist_particles = spawn_mist_particles
local cur_obj_play_sound_1 = cur_obj_play_sound_1
local cur_obj_hide = cur_obj_hide
local cur_obj_unhide = cur_obj_unhide
local coss = coss
local sins = sins
local obj_copy_pos = obj_copy_pos
local cur_obj_rotate_face_angle_using_vel = cur_obj_rotate_face_angle_using_vel
local cur_obj_move_using_vel = cur_obj_move_using_vel
local nearest_player_to_object = nearest_player_to_object
local spawn_red_coin_cutscene_star = spawn_red_coin_cutscene_star
local cur_obj_play_sound_2 = cur_obj_play_sound_2
local cur_obj_init_animation = cur_obj_init_animation
local obj_return_home_if_safe = obj_return_home_if_safe
local obj_turn_toward_object = obj_turn_toward_object
local is_point_within_radius_of_mario = is_point_within_radius_of_mario
local object_step = object_step
local obj_scale = obj_scale
local cur_obj_scale = cur_obj_scale
local cur_obj_update_floor_and_walls = cur_obj_update_floor_and_walls
local cur_obj_if_hit_wall_bounce_away = cur_obj_if_hit_wall_bounce_away
local cur_obj_move_standard = cur_obj_move_standard
local cur_obj_update_floor_height_and_get_floor = cur_obj_update_floor_height_and_get_floor
local count_objects_with_behavior = count_objects_with_behavior
local cur_obj_become_tangible = cur_obj_become_tangible
local obj_get_first_with_behavior_id = obj_get_first_with_behavior_id
local obj_get_next_with_same_behavior_id = obj_get_next_with_same_behavior_id
local cur_obj_scale_over_time = cur_obj_scale_over_time
local cur_obj_shake_screen = cur_obj_shake_screen
local lateral_dist_between_objects = lateral_dist_between_objects
local dist_between_objects = dist_between_objects
local obj_mark_for_deletion = obj_mark_for_deletion
local mario_stop_riding_object = mario_stop_riding_object
local obj_get_next_with_behavior_id = obj_get_next_with_behavior_id

-- Packing and unpacking like this allows for C-like type conversions
local string_pack = string.pack
local string_unpack = string.unpack
---@param value number
---@param pack_fmt string
---@param unpack_fmt string
local repack = function (value, pack_fmt, unpack_fmt)
    return string_unpack(unpack_fmt, string_pack(pack_fmt, value))
end

--------------------------
-----Helper Variables-----
--------------------------

local id_bhvFlipswap_Platform_Border_MOP = id_bhvUnused05A8
local id_bhvShrink_Platform_Border_MOP = id_bhvUnused05A8
local id_bhvGreen_Switchboard_Gears_MOP = id_bhvUnused05A8

local PURPLE_SWITCH_IDLE = 0
local PURPLE_SWITCH_PRESSED = 1
local PURPLE_SWITCH_TICKING = 2
local PURPLE_SWITCH_UNPRESSED = 3
local PURPLE_SWITCH_WAIT_FOR_MARIO_TO_GET_OFF = 4

local ANM_swim = 0
local ANM_attack = 1

local BLARGG_ACT_SWIM = 0
local BLARGG_ACT_CHASE = 1
local BLARGG_ACT_KNOCKBACK = 2
local BLARGG_ACT_BACKUP = 3

local FRIENDLY_BLARGG_ACT_IDLE = 0
local FRIENDLY_BLARGG_ACT_BEING_RIDDEN = 1

--------------------------
-----Helper Functions-----
--------------------------

-- ##### Switch statements are only faster when there's several different states
-- ##### This is because each lookup of the switch statement creates an entirely new function
-- ##### However the performance overhead isn't significant at all so use it whenever you feel like it
---@param param any
---@param case_table table<any, function>
---@return function?
local function switch(param, case_table)
    local case = case_table[param]
    if case then return case() end
    local def = case_table['default']
    return def and def() or nil
end

--- Moves Mario to the top of the object, then sets his Y speed and resets his fall.
---@param m MarioState
---@param obj Object
---@param new_velY integer
local function bounce_off_object(m, obj, new_velY)
    m.pos.y = obj.oPosY + obj.hitboxHeight
    m.vel.y = new_velY

    -- MARIO_UNKNOWN_8 is the flag that controls Mario's screaming when he falls from a high place
    -- This removes the flag so he can scream again
    m.flags = m.flags & ~MARIO_UNKNOWN_08

    play_sound(SOUND_ACTION_BOUNCE_OFF_OBJECT, m.marioObj.header.gfx.cameraToObject)
end

--- Gets closer to a goal value by the increment when ran
---@param goal integer
---@param src integer
---@param inc integer
local function approach_by_increment(goal, src, inc)
    local diff = goal - src
    if diff > inc then
        return src + inc
    elseif diff < -inc then
        return src - inc
    else
        return goal
    end
end

---@param m MarioState
---@return boolean
local function is_bubbled(m)
    return m.action == ACT_BUBBLED
end

---@param parent Object
---@param model ModelExtendedId
---@param behaviorId BehaviorId
local function spawn_object(parent, model, behaviorId)
    local obj = spawn_non_sync_object(behaviorId, model, 0, 0, 0, nil)
    if not obj then return nil end

    obj_copy_pos_and_angle(obj, parent)
    return obj
end

---@return boolean
local function is_current_area_sync_valid()
    local np = gNetworkPlayers
    for i = 1, MAX_PLAYERS - 1, 1 do
        if np[i] and np[i].connected and
        (not np[i].currLevelSyncValid or not np[i].currAreaSyncValid) and
        is_player_in_local_area(gMarioStates[i]) ~= 0 then
            return false
        end
    end
    return true
end

---@param start_point number
---@param end_point number
---@param time number
---@return number
local function lerp(start_point, end_point, time)
    return start_point * (1 - time) + end_point * time
end

--- @param obj Object
--- @param hitbox ObjectHitbox
local function obj_set_hitbox(obj, hitbox)
    if not obj or not hitbox then return end
    -- Sets other hitbox values once
    if (obj.oFlags & OBJ_FLAG_30) == 0 then
        obj.oFlags = obj.oFlags | OBJ_FLAG_30

        obj.oInteractType = hitbox.interactType
        obj.oDamageOrCoinValue = hitbox.damageOrCoinValue
        obj.oHealth = hitbox.health
        obj.oNumLootCoins = hitbox.numLootCoins

        cur_obj_become_tangible()
    end

    -- Set actual hitboxes
    obj.hitboxRadius = obj.header.gfx.scale.x * hitbox.radius
    obj.hitboxHeight = obj.header.gfx.scale.y * hitbox.height
    obj.hurtboxRadius = obj.header.gfx.scale.x * hitbox.hurtboxRadius
    obj.hurtboxHeight = obj.header.gfx.scale.y * hitbox.hurtboxHeight
    obj.hitboxDownOffset = obj.header.gfx.scale.y * hitbox.downOffset
end

-- --- Global Switch State (Shared) ---
local START_STATE = 1
local switch_block_state = START_STATE
local scalar_timer = 0
local StarSpawned = false

hook_event(HOOK_ON_PACKET_RECEIVE, function (datatable)
    if datatable.timer then scalar_timer = datatable.timer end
    if datatable.state then switch_block_state = datatable.state end
end)

hook_event(HOOK_ON_LEVEL_INIT, function ()
    switch_block_state = START_STATE
    StarSpawned = false
end)
-- bhvNoteblock_MOP

local E_MODEL_NOTEBLOCK = smlua_model_util_get_id("Noteblock_MOP")
local NOTEBLOCK_ACT_IDLE = 0
local NOTEBLOCK_ACT_BOUNCING = 1

function bhv_noteblock_init(obj)
    obj_set_model_extended(obj, E_MODEL_NOTEBLOCK)
end

function bhv_noteblock_loop(obj)
    local m = gMarioStates[0]
    local y_spd = 64

    if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(m) then
        -- Jump. If A is pressed during the jump, increase y_spd.
        if m.controller.buttonPressed & A_BUTTON ~= 0 then
            y_spd = y_spd + 12
            spawn_mist_particles()
        end
        set_mario_action(m, ACT_DOUBLE_JUMP, 0)

        -- Calculates y speed
        local intermediate_y_spd = repack(y_spd, "f", "I")
		intermediate_y_spd = intermediate_y_spd + (obj.oBehParams2ndByte << 16)
		y_spd = repack(intermediate_y_spd, "I", "f")
		m.vel.y = y_spd

        obj.oAction = NOTEBLOCK_ACT_BOUNCING
    end

    if obj.oAction == NOTEBLOCK_ACT_BOUNCING then
        if obj.oTimer == 4 then
            obj.oAction = NOTEBLOCK_ACT_IDLE
            obj.oPosY = obj.oHomeY
        else
            -- Moves the noteblock slightly up and down, to give it a "bounce"
            if obj.oTimer > 2 then
                obj.oPosY = obj.oHomeY + (obj.oTimer % 3) * 6
            else
                obj.oPosY = obj.oHomeY - obj.oTimer * 6
            end
        end
    end
end

-- bhvSwitchblock_Switch_MOP

local E_MODEL_SWITCHBLOCK_SWITCH = smlua_model_util_get_id("Switchblock_Switch_MOP")

function bhv_Switchblock_Switch_init(obj)
    obj_set_model_extended(obj, E_MODEL_SWITCHBLOCK_SWITCH)
end

function bhv_Switchblock_Switch_loop(obj)
    obj.oAnimState = obj.oBehParams2ndByte
    local old_state = switch_block_state
    if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(gMarioStates[0]) then
        switch_block_state = obj.oBehParams2ndByte
    end

    local scalar = 0
    if switch_block_state ~= obj.oBehParams2ndByte then
        scalar = 1
    end

    -- Whenever the switch block state changes
    if old_state ~= switch_block_state then
        scalar_timer = 0
        local np = gNetworkPlayers
        for i = 1, MAX_PLAYERS - 1, 1 do
            if is_current_area_sync_valid() and np[0].currLevelNum == np[i].currLevelNum then
                network_send_to(i, true, { timer = 0, state = switch_block_state })
            end
        end
    end

    -- Slowly raise and lower the switch
    if scalar_timer < 100 then
        scalar_timer = scalar_timer + 1
    end

    local result = scalar * 0.9 + 0.1
    local current_scale = obj.header.gfx.scale.y

    -- Make smaller if the switch is pressed
    obj.header.gfx.scale.y = lerp(current_scale, result, scalar_timer * 0.01)
end

-- bhvFlipswap_Platform_MOP

local E_MODEL_FLIPSWAP_PLATFORM = smlua_model_util_get_id("Flipswap_Platform_MOP")
local E_MODEL_FLIPSWAP_PLATFORM_BORDER = smlua_model_util_get_id("Flipswap_Platform_Border_MOP")
local FLIPSWAP_PLATFORM_ACT_IDLE = 0
local FLIPSWAP_PLATFORM_ACT_FLIPPING = 1
-- 1x is very fast, 0.5x is usually the norm
local FLIP_SPEED_MULTIPLIER = 0.5

function bhv_Flipswap_Platform_init(obj)
    obj_set_model_extended(obj, E_MODEL_FLIPSWAP_PLATFORM)
    -- Spawns the border
    local childObj = spawn_non_sync_object(id_bhvFlipswap_Platform_Border_MOP, E_MODEL_FLIPSWAP_PLATFORM_BORDER, obj.oPosX, obj.oPosY, obj.oPosZ,
    ---@param o Object
    function (o)
        -- Probably overdone but just to be safe
        obj_set_face_angle(o, obj.oFaceAnglePitch, obj.oFaceAngleYaw, obj.oFaceAngleRoll)
        obj_set_move_angle(o, obj.oMoveAnglePitch, obj.oMoveAngleYaw, obj.oMoveAngleRoll)
    end)
    childObj.parentObj = obj
end

function bhv_Flipswap_Platform_loop(obj)
    local m = gMarioStates[0]

    local action = obj.oAction
    if action == FLIPSWAP_PLATFORM_ACT_IDLE then
        -- If Mario enters an air action, start flipping
        if m.prevAction & ACT_GROUP_MASK ~= ACT_GROUP_AIRBORNE and m.action & ACT_GROUP_MASK == ACT_GROUP_AIRBORNE then
            --sloth brain it
            if obj.oFaceAngleRoll == 0 then
                obj.oMoveAngleRoll = -2048 * FLIP_SPEED_MULTIPLIER
            else
                obj.oMoveAngleRoll = 2048 * FLIP_SPEED_MULTIPLIER
            end
            obj.oAction = FLIPSWAP_PLATFORM_ACT_FLIPPING
        end
    elseif action == FLIPSWAP_PLATFORM_ACT_FLIPPING then
        -- Flip the platform
        if obj.oTimer < 16 * FLIP_SPEED_MULTIPLIER ^ -1 then
            obj.oFaceAngleRoll = obj.oFaceAngleRoll + obj.oMoveAngleRoll
        -- Disallow flipping again until Mario lands
        elseif m.action & ACT_GROUP_MASK ~= ACT_GROUP_AIRBORNE then
            obj.oAction = FLIPSWAP_PLATFORM_ACT_IDLE
        end
    end
end

-- bhvSandBlock_MOP

local E_MODEL_SANDBLOCK = smlua_model_util_get_id("SandBlock_MOP")
local SANDBLOCK_ACT_IDLE = 0
local SANDBLOCK_ACT_FADING = 1
local SANDBLOCK_ACT_DISAPPEARED = 2
local FADE_TIMER = 300

function bhv_sandblock_init(obj)
    obj_set_model_extended(obj, E_MODEL_SANDBLOCK)
end

function bhv_sandblock_loop(obj)
    -- Only activate collision if the sandblock has not disappeared
    if obj.oAction < SANDBLOCK_ACT_DISAPPEARED then
        load_object_collision_model()
    end
    -- Disappearing
    local action = obj.oAction
    if action == SANDBLOCK_ACT_FADING then
        if obj.oTimer == FADE_TIMER then
            obj.oAction = SANDBLOCK_ACT_DISAPPEARED
        end
        -- Causes the sandblock to become smaller and smaller on the y axis
        obj.header.gfx.scale.y = ((300 - obj.oTimer) / 300.0)
        -- Makes the sandblock not move the player vertically as it's breaking
        obj.oPosY = obj.oPosY + 1.025

        -- Spawn effects
        spawn_non_sync_object(id_bhvDirtParticleSpawner, E_MODEL_NONE, obj.oPosX, obj.oPosY, obj.oPosZ, nil)
        cur_obj_play_sound_1(SOUND_ENV_MOVINGSAND)
    elseif action == SANDBLOCK_ACT_DISAPPEARED then
        cur_obj_hide()
        if obj.oTimer == FADE_TIMER + 1 then
            obj.oPosY = obj.oHomeY
            obj.oAction = SANDBLOCK_ACT_IDLE
            obj.header.gfx.scale.y = 1.0
            cur_obj_unhide()
        end
    end

    if cur_obj_is_mario_on_platform() == 1 and obj.oAction == SANDBLOCK_ACT_IDLE and not is_bubbled(gMarioStates[0]) then
        obj.oAction = SANDBLOCK_ACT_FADING
    end
end

-- bhvCheckpoint_Flag_MOP

local E_MODEL_CHECKPOINT = smlua_model_util_get_id("Checkpoint_Flag_MOP")

function bhv_checkpoint_flag_init(obj)
    obj_set_model_extended(obj, E_MODEL_CHECKPOINT)
end

function bhv_checkpoint_flag_loop(obj)
    local m = gMarioStates[0]
    if obj.oAction == 0 then
        if obj_check_if_collided_with_object(obj, m.marioObj) ~= 0 then
            m.spawnInfo.startPos.x, m.spawnInfo.startPos.y, m.spawnInfo.startPos.z = obj.oPosX, obj.oPosY, obj.oPosZ
            m.spawnInfo.startAngle.y = obj.oFaceAngleYaw
            cur_obj_play_sound_1(SOUND_GENERAL_COLLECT_1UP)
            obj.oAction = 1
        end
    end
end

-- bhvShrink_Platform_MOP

local E_MODEL_SHRINK_PLATFORM = smlua_model_util_get_id("Shrink_Platform_MOP")
local E_MODEL_SHRINK_PLATFORM_BORDER = smlua_model_util_get_id("Shrink_Platform_Border_MOP")
local SHRINK_PLATFORM_ACT_IDLE = 0
local SHRINK_PLATFORM_ACT_SHRINKING = 1
local SHRINK_PLATFORM_ACT_DISAPPEARED = 2
local SHRINK_TIME = 150

function bhv_Shrink_Platform_init(obj)
    obj_set_model_extended(obj, E_MODEL_SHRINK_PLATFORM)
    spawn_object(obj, E_MODEL_SHRINK_PLATFORM_BORDER, id_bhvShrink_Platform_Border_MOP)
end

function bhv_Shrink_Platform_loop(obj)
    -- Only activate collision if the model is still visible
    if obj.oAction < SHRINK_PLATFORM_ACT_DISAPPEARED then
        load_object_collision_model()
    end

    local action = obj.oAction
    --disappearing
    if action == SHRINK_PLATFORM_ACT_SHRINKING then
        if obj.oTimer == SHRINK_TIME then
            obj.oAction = SHRINK_PLATFORM_ACT_DISAPPEARED
        end

        -- Slowly shrinks the size of the platform horizontally
        obj.header.gfx.scale.x = (SHRINK_TIME - obj.oTimer) / SHRINK_TIME
        obj.header.gfx.scale.z = (SHRINK_TIME - obj.oTimer) / SHRINK_TIME
    elseif action == SHRINK_PLATFORM_ACT_DISAPPEARED then
        -- Reset after the platform has fully disappeared
        cur_obj_hide()
        if obj.oTimer == SHRINK_TIME + 1 then
            obj.oAction = SHRINK_PLATFORM_ACT_IDLE
            obj.header.gfx.scale.x = 1.0
            obj.header.gfx.scale.z = 1.0
            cur_obj_unhide()
        end
    end

    -- Start disappearing once Mario gets on it
    if cur_obj_is_mario_on_platform() == 1 and obj.oAction == SHRINK_PLATFORM_ACT_IDLE and not is_bubbled(gMarioStates[0]) then
        obj.oAction = SHRINK_PLATFORM_ACT_SHRINKING
        cur_obj_play_sound_1(SOUND_OBJ_UNK23)
    end
end

-- bhvFlipswitch_Panel_MOP

local E_MODEL_FLIPSWITCH_PANEL = smlua_model_util_get_id("Flipswitch_Panel_MOP")

function bhv_flipswitch_panel_init(obj)
    obj_set_model_extended(obj, E_MODEL_FLIPSWITCH_PANEL)
    network_init_object(obj, false, { "oAction", "oAnimState" })
end

function bhv_flipswitch_panel_loop(obj)
    if StarSpawned then
        obj.oAnimState = 2
    else
        if obj.oAction == 0 then
            if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(gMarioStates[0]) then
                obj.oAnimState = obj.oAnimState ~ 1
                cur_obj_play_sound_1(SOUND_GENERAL_BIG_CLOCK)
                obj.oAction = 1
                network_send_object(obj, true)
            end
        elseif obj.oAction == 1 then
            local cp = nearest_player_to_object(obj)
            if not cp or (cur_obj_is_mario_on_platform() == 0 and cp.platform ~= obj) then
                obj.oAction = 0
            end
        end
    end
end

-- bhvFlipBlock_MOP

local E_MODEL_FLIPBLOCK = smlua_model_util_get_id("FlipBlock_MOP")
local FLIP_BLOCK_ACT_UNINITIALIZED = 0
local FLIP_BLOCK_ACT_IDLE = 1
local FLIP_BLOCK_ACT_FLIPPING = 2
local FLIP_TIMER = 210

local sFlipBlockHitbox = {
    interactType = INTERACT_BREAKABLE,
    downOffset = 0,
    damageOrCoinValue = 0,
    health = 0,
    numLootCoins = 0,
    radius = 64,
    height = 64,
    hurtboxHeight = 0,
    hurtboxRadius = 0
}

function bhv_flip_block_init(obj)
    obj.oMoveAnglePitch = obj.oFaceAnglePitch
    obj_set_model_extended(obj, E_MODEL_FLIPBLOCK)
end

function bhv_flip_block_loop(obj)
    obj.oInteractStatus = 0
    if obj.oTimer == 0 and obj.oAction == FLIP_BLOCK_ACT_UNINITIALIZED then
        obj_set_hitbox(obj, sFlipBlockHitbox)
        obj.oAction = FLIP_BLOCK_ACT_IDLE
    end
    if obj.oAction == FLIP_BLOCK_ACT_FLIPPING then
        obj.header.gfx.scale.y = 0.1
        if obj.oTimer == FLIP_TIMER then
            obj.oAction = FLIP_BLOCK_ACT_IDLE
            obj.oSubAction = 0
            obj.header.gfx.scale.y = 1
        end
        obj.oFaceAnglePitch = obj.oFaceAnglePitch + (FLIP_TIMER - obj.oTimer) * 16
        if ((obj.oFaceAnglePitch / 0x8000) - obj.oSubAction) > 0 then
            cur_obj_play_sound_1(SOUND_GENERAL_SWISH_WATER)
            obj.oSubAction = obj.oSubAction + 1
        end
    else
        local m = gMarioStates[0]
        local next_position = m.pos.y + m.vel.y + 160
        if not is_bubbled(m) and cur_obj_was_attacked_or_ground_pounded() ~= 0
        or (mario_is_within_rectangle(obj.oPosX-100, obj.oPosX+100, obj.oPosZ-100, obj.oPosZ+100) ~= 0
            and m.vel.y > 0 and (m.ceil and m.ceil.object) and m.ceil.object == obj
            and (next_position > m.ceilHeight and next_position < obj.oPosY + 100)) then
            obj.oAction = FLIP_BLOCK_ACT_FLIPPING
            obj.oIntangibleTimer = FLIP_TIMER
            m.vel.y = (m.vel.y > 0) and 0 or m.vel.y
            cur_obj_play_sound_1(SOUND_GENERAL_SWISH_WATER)
        else
            obj.oFaceAnglePitch = obj.oMoveAnglePitch
            obj.header.gfx.scale.y = 1
            load_object_collision_model()
        end
    end
end

-- bhvSwitchblock_MOP

local E_MODEL_SWITCHBLOCK = smlua_model_util_get_id("Switchblock_MOP")
local SWITCHBLOCK_ACT_ACTIVE = 0
local SWITCHBLOCK_ACT_INACTIVE = 1

function bhv_Switchblock_init(obj)
    obj_set_model_extended(obj, E_MODEL_SWITCHBLOCK)
end

function bhv_Switchblock_loop(obj)
    -- Determines which block color this becomes
    obj.oAnimState = obj.oBehParams2ndByte + obj.oAction

    -- Only loads collision if the corresponding switch is pressed
    if switch_block_state == obj.oBehParams2ndByte >> 1 then
        load_object_collision_model()
        obj.oAction = SWITCHBLOCK_ACT_ACTIVE
    else
        obj.oAction = SWITCHBLOCK_ACT_INACTIVE
    end
end

-- bhvSpring_MOP

local E_MODEL_SPRING = smlua_model_util_get_id("Spring_MOP")
local SPRING_ACT_READY = 0
local SPRING_ACT_USED = 1

function bhv_Spring_init(obj)
    obj_set_model_extended(obj, E_MODEL_SPRING)
end

function bhv_Spring_loop(obj)
    local m = gMarioStates[0]
    if is_bubbled(m) then return end

    -- Initial y speed
    local Yspd = 56.0
    local y_vel = nil
    local forward_vel = nil

    if obj.oAction == SPRING_ACT_READY then
        if obj_check_if_collided_with_object(obj, m.marioObj) ~= 0 then
            set_mario_action(m, ACT_DOUBLE_JUMP, 0)
            m.faceAngle.y = obj.oFaceAngleYaw

            y_vel = repack(Yspd, "f", "I")
            -- Calculates how fast Mario should go using oBehParams2ndByte
            forward_vel = repack(y_vel + (obj.oBehParams & 0x00FF0000), "I", "f")
            m.forwardVel = forward_vel

            -- Calculates how high Mario should go using the 1st byte
            y_vel = y_vel + (((obj.oBehParams >> 24) & 0xFF) << 16)
            bounce_off_object(m, obj, repack(y_vel, "I", "f"))

            -- Prevent interaction for some time
            obj.oAction = SPRING_ACT_USED
        end
    else
        if obj.oTimer == 15 then
            obj.oAction = SPRING_ACT_READY
        end
    end
end

-- bhvGreen_Switchboard_MOP

local E_MODEL_GREEN_SWITCHBOARD = smlua_model_util_get_id("Green_Switchboard_MOP")
local E_MODEL_GREEN_SWITCHBOARD_GEARS = smlua_model_util_get_id("Green_Switchboard_Gears_MOP")

function bhv_Green_Switchboard_init(obj)
    obj_set_model_extended(obj, E_MODEL_GREEN_SWITCHBOARD)
    -- Spawns the gears
    spawn_object(obj, E_MODEL_GREEN_SWITCHBOARD_GEARS, id_bhvGreen_Switchboard_Gears_MOP)
end

function bhv_Green_Switchboard_loop(obj)
    local m = gMarioStates[0]
    local move = 0

    if cur_obj_is_mario_on_platform() == 1 and not is_bubbled(m) then
        local dx = m.pos.x - obj.oPosX
        local dz = m.pos.z - obj.oPosZ

        -- Rotates the switchboard based on Mario's position
        local d_pos = dx * sins(obj.oMoveAngleYaw) + dz * coss(obj.oMoveAngleYaw)
        obj.oFaceAnglePitch = approach_by_increment(d_pos * -10, obj.oFaceAnglePitch, 128)

        -- Moves the switchboard based on its pitch
        move = obj.oFaceAnglePitch / -10
        if move > 10 then
            obj.oForwardVel = approach_by_increment(move, obj.oForwardVel, 2)
        elseif move < -10 then
            obj.oForwardVel = approach_by_increment(move, obj.oForwardVel, 2)
        end
    else
        obj.oForwardVel = approach_by_increment(0, obj.oForwardVel, 0.5)
        obj.oFaceAnglePitch = approach_by_increment(0, obj.oFaceAnglePitch, 128)
    end

    cur_obj_move_using_vel()
    load_object_collision_model()
end

function bhv_Green_Switchboard_Gears_loop(obj)
    local parent = obj.parentObj
    if not parent then return end

    -- Move with our parent and rotate using the parent's forward velocity
    obj_copy_pos(obj, parent)
    obj.oFaceAnglePitch = obj.oFaceAnglePitch + parent.oForwardVel * 64
end

-- bhvFlipswitch_Panel_StarSpawn_MOP

function bhv_flipswitch_panel_starspawn_loop(obj)
    if not StarSpawned then
        local flipswitches_count = count_objects_with_behavior(id_bhvFlipswitch_Panel_MOP)
        local flipswitches_active = 0

        local curr_obj = obj_get_first_with_behavior_id(id_bhvFlipswitch_Panel_MOP)
        while curr_obj do
            if curr_obj.oAnimState == 1 then
                flipswitches_active = flipswitches_active + 1
            end
            curr_obj = obj_get_next_with_behavior_id(curr_obj, id_bhvFlipswitch_Panel_MOP)
        end

        if flipswitches_active == flipswitches_count and flipswitches_count > 0 then
            spawn_red_coin_cutscene_star(obj.oPosX, obj.oPosY, obj.oPosZ)
            StarSpawned = true
        end
    end
end

