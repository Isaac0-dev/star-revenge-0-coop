// bhvNoteblock_MOP

const BehaviorScript bhvNoteblock_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_HOME(),
    LOAD_COLLISION_DATA(col_Noteblock_MOP_0xaa6444),
    SCALE(0, 64),
    CALL_NATIVE(bhv_noteblock_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_noteblock_loop),
    CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};


// bhvSwitchblock_Switch_MOP

const BehaviorScript bhvSwitchblock_Switch_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_Switchblock_Switch_MOP_0x7d7348),
    SET_FLOAT(oCollisionDistance, 512),
    CALL_NATIVE(bhv_Switchblock_Switch_init),
    BEGIN_LOOP(),
    CALL_NATIVE(load_object_collision_model),
    CALL_NATIVE(bhv_Switchblock_Switch_loop),
    END_LOOP(),
};


// bhvFlipswap_Platform_MOP

const BehaviorScript bhvFlipswap_Platform_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_INT(oFaceAngleRoll, 0),
    LOAD_COLLISION_DATA(col_Flipswap_Platform_MOP_0x7d9d88),
    SET_FLOAT(oCollisionDistance, 1024),
    CALL_NATIVE(bhv_Flipswap_Platform_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_Flipswap_Platform_loop),
    CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};


// bhvSandBlock_MOP

const BehaviorScript bhvSandBlock_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_HOME(),
    LOAD_COLLISION_DATA(col_Sandblock_MOP_0xaa6444),
    CALL_NATIVE(bhv_sandblock_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_sandblock_loop),
    END_LOOP(),
};


// bhvCheckpoint_Flag_MOP

const BehaviorScript bhvCheckpoint_Flag_MOP[] = {
    BEGIN(OBJ_LIST_GENACTOR),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE | OBJ_FLAG_COMPUTE_DIST_TO_MARIO),
    SET_INT(oInteractType, INTERACT_POLE),
    SET_HITBOX(64, 650),
    SET_INT(oIntangibleTimer, -1),
    CALL_NATIVE(bhv_checkpoint_flag_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_checkpoint_flag_loop),
    END_LOOP(),
};


// bhvShrink_Platform_MOP

const BehaviorScript bhvShrink_Platform_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_Shrink_Platform_MOP_0xad3720),
    SET_FLOAT(oCollisionDistance, 1024),
    CALL_NATIVE(bhv_Shrink_Platform_init),
    BEGIN_LOOP(),
    CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};


// bhvFlipswitch_Panel_MOP

const BehaviorScript bhvFlipswitch_Panel_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_Flipswitch_Panel_MOP_0x7daf78),
    SET_FLOAT(oCollisionDistance, 1024),
    CALL_NATIVE(bhv_flipswitch_panel_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_flipswitch_panel_loop),
    CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};


// bhvFlipBlock_MOP

const BehaviorScript bhvFlipBlock_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_INT(oAction, 0),
    SET_FLOAT(oCollisionDistance, 500),
    LOAD_COLLISION_DATA(col_FlipBlock_MOP_0x7d1a98),
    CALL_NATIVE(bhv_flip_block_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_flip_block_loop),
    SET_INT(oInteractStatus, 0),
    END_LOOP(),
};


// bhvSwitchblock_MOP

const BehaviorScript bhvSwitchblock_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_Switchblock_MOP_0x7d3058),
    SET_FLOAT(oCollisionDistance, 512),
    CALL_NATIVE(bhv_Switchblock_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_Switchblock_loop),
    END_LOOP(),
};


// bhvSpring_MOP

const BehaviorScript bhvSpring_MOP[] = {
    BEGIN(OBJ_LIST_LEVEL),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    SET_HITBOX(160, 160),
    SET_INTERACT_TYPE(INTERACT_COIN),
    SET_INT(oIntangibleTimer, 0),
    CALL_NATIVE(bhv_Spring_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_Spring_loop),
    END_LOOP(),
};


// bhvGreen_Switchboard_MOP

const BehaviorScript bhvGreen_Switchboard_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    LOAD_COLLISION_DATA(col_Green_Switchboard_MOP_0x7ddc38),
    SET_FLOAT(oCollisionDistance, 1024),
    CALL_NATIVE(bhv_Green_Switchboard_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_Green_Switchboard_loop),
    END_LOOP(),
};

const BehaviorScript bhvGreen_Switchboard_Gears_MOP[] = {
    BEGIN(OBJ_LIST_DEFAULT),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_Green_Switchboard_Gears_loop),
    END_LOOP(),
};


// bhvFlipswitch_Panel_StarSpawn_MOP

const BehaviorScript bhvFlipswitch_Panel_StarSpawn_MOP[] = {
    BEGIN(OBJ_LIST_DEFAULT),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_flipswitch_panel_starspawn_loop),
    END_LOOP(),
};

const BehaviorScript bhvFlipswitch_Panel_MOP[] = {
    BEGIN(OBJ_LIST_SURFACE),
    ID(id_bhvNewId),
    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE ),
    LOAD_COLLISION_DATA(col_Flipswitch_Panel_MOP_0x7daf78),
    SET_FLOAT(oCollisionDistance,1024),
    CALL_NATIVE(bhv_flipswitch_panel_init),
    BEGIN_LOOP(),
    CALL_NATIVE(bhv_flipswitch_panel_loop),
    CALL_NATIVE(load_object_collision_model),
    END_LOOP(),
};

