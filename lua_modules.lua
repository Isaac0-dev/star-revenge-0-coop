local sLevelInformation = {
    [LEVEL_BBH] = { { LEVEL_BBH, 3, -8193, 10649, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_WF] = { { LEVEL_WF, 3, -8541, 10911, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_SA] = { { LEVEL_SA, 1, -8193, 13507, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_HMC] = { { LEVEL_HMC, 3, -11199, 11072, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_WDW] = { { LEVEL_WDW, 2, -12610, 11445, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_THI] = { { LEVEL_THI, 1, -8193, 8192, -11000, 20000, -18750, 22377 }, false, 0 },
    [LEVEL_TTC] = { { LEVEL_TTC, 2, -8193, 8192, -11000, 20000, -8448, 24974 }, false, 0 },
    [LEVEL_TTC] = { { LEVEL_TTC, 6, -8193, 11774, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_DDD] = { { LEVEL_DDD, 2, -8193, 22123, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_TTM] = { { LEVEL_TTM, 2, -13000, 13925, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_SSL] = { { LEVEL_SSL, 3, -9387, 10666, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_THI] = { { LEVEL_THI, 3, -12151, 12148, -11000, 20000, -8448, 10281 }, true, 0 },
    [LEVEL_CCM] = { { LEVEL_CCM, 3, -8193, 15079, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_SL] = { { LEVEL_SL, 2, -8193, 8192, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_BOB] = { { LEVEL_BOB, 2, -8193, 9899, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_LLL] = { { LEVEL_LLL, 2, -11240, 8192, -11000, 20000, -8448, 8192 }, true, 0 },
    [LEVEL_JRB] = { { LEVEL_JRB, 2, -13381, 14486, -11000, 20000, -8448, 8192 }, true, 0 },
}

-- Disable OMM camera for 2D areas
if OmmApi then
    OmmApi.omm_register_game("Star Revenge 0", function () return true end, function ()
        OmmApi.omm_register_game_data(-1, 2, LEVEL_PSS, true, false, 0, 250, nil)
        for _, levelData in pairs(sLevelInformation) do
            OmmApi.omm_register_camera_no_collision_box(table.unpack(levelData[1]))
        end
    end)
end

-- Keep player on 2D axis
hook_event(HOOK_MARIO_UPDATE, function (m)
    if m.playerIndex ~= 0 then return end
    local np = gNetworkPlayers[m.playerIndex]
    local levelData = sLevelInformation[np.currLevelNum]
    if levelData and levelData[1][2] == np.currAreaIndex then
        if levelData[1] then
            m.pos.z = levelData[2]
        else
            m.pos.x = levelData[2]
        end
    end
end)
