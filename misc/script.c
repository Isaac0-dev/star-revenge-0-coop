// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2a6238 -> level_script_0x2a62e0
const LevelScript level_script_0x2a62e0_entry[] = {
/* 0x002A62E0 :: 02040000 */                                                     EXIT(),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2a6238
const LevelScript level_script_0x2a6238_entry[] = {
/* 0x002A6238 :: 11080000 8024BE14 */                                            CALL(/* arg */ 0x0000, /* func */ 0x8024be14),
/* 0x002A6240 :: 02040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000000, level_script_0x2a62e0_entry),
/* 0x002A624C :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x002A6250 :: 16100000 8016F000 0021F4C0 00269EA0 */                          // FIXED_LOAD(/* loadAddr */ 0x8016f000, /* start */ 0x0021f4c0, /* end */ 0x00269ea0),
/* 0x002A6260 :: 170C0007 00B1F8B5 00B2D715 */                                   // LOAD_RAW(/* seg */ 0x0007, /* start */ 0x00b1f8b5, /* end */ 0x00b2d715),
/* 0x002A626C :: 1D040000 */                                                     ALLOC_LEVEL_POOL(),
/* 0x002A6270 :: 1F080200 14000408 */                                            AREA(2, area_2_geo_14000408),
/* 0x002A6278 :: 24181F00 0000FF9C 00000000 00000000 04000000 13003048 */            OBJECT(MODEL_NONE, /* posX */ 0, /* posY */ -100, /* posZ */ 0, /* angleX */ 0, /* angleY */ 0, /* angleZ */ 0, /* behParam */ 0x04000000, bhvActSelector),
/* 0x002A6290 :: 2E080000 0700DE30 */                                                TERRAIN(area_1_collision_0x0700DE30),
/* 0x002A6298 :: 20040000 */                                                     END_AREA(),
/* 0x002A629C :: 1E040000 */                                                     FREE_LEVEL_POOL(),
/* 0x002A62A0 :: 29040200 */                                                     LOAD_AREA(/* area */ 0x02),
/* 0x002A62A4 :: 33080010 FFFFFF00 */                                            TRANSITION(/* transType */ 0x00, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x002A62AC :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x002A62B0 :: 3704000D */                                                     SET_MENU_MUSIC(/* seq */ 0x000d),
/* 0x002A62B4 :: 11080000 80177560 */                                            CALL(/* arg */ 0x0000, /* func */ 0x80177560),
/* 0x002A62BC :: 12080000 80177610 */                                            CALL_LOOP(/* arg */ 0x0000, /* func */ 0x80177610),
/* 0x002A62C4 :: 3C040002 */                                                     GET_OR_SET(/* op */ 0x00, /* var */ 0x02),
/* 0x002A62C8 :: 380400BE */                                                     STOP_MUSIC(/* fadeOutTime */ 0x00be),
/* 0x002A62CC :: 33080110 FFFFFF00 */                                            TRANSITION(/* transType */ 0x01, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x002A62D4 :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x002A62D8 :: 1C040000 */                                                     CLEAR_LEVEL(),
/* 0x002A62DC :: 04040001 */                                                     SLEEP_BEFORE_EXIT(/* frames */ 0x0001),
/* 0x002A62E0 :: 02040000 */                                                     EXIT(),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> script_exec_level_table
const LevelScript level_script_0x2abf18_entry[] = {
/* 0x002ABF18 :: 3C040103 */                                                     GET_OR_SET(/* op */ 0x01, /* var */ 0x03),
/* 0x002ABF1C :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000004, bbh_entry),
/* 0x002ABF28 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000005, ccm_entry),
/* 0x002ABF34 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000006, castle_inside_entry),
/* 0x002ABF40 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000007, hmc_entry),
/* 0x002ABF4C :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000008, ssl_entry),
/* 0x002ABF58 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000009, bob_entry),
/* 0x002ABF64 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000000a, sl_entry),
/* 0x002ABF70 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000000b, wdw_entry),
/* 0x002ABF7C :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000000c, jrb_entry),
/* 0x002ABF88 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000000d, thi_entry),
/* 0x002ABF94 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000000e, ttc_entry),
/* 0x002ABFA0 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000000f, rr_entry),
/* 0x002ABFAC :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000010, castle_grounds_entry),
/* 0x002ABFB8 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000011, bitdw_entry),
/* 0x002ABFC4 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000012, vcutm_entry),
/* 0x002ABFD0 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000013, bitfs_entry),
/* 0x002ABFDC :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000014, sa_entry),
/* 0x002ABFE8 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000015, bits_entry),
/* 0x002ABFF4 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000016, lll_entry),
/* 0x002AC000 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000017, ddd_entry),
/* 0x002AC00C :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000018, wf_entry),
/* 0x002AC018 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000019, ending_entry),
/* 0x002AC024 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000001a, castle_courtyard_entry),
/* 0x002AC030 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000001b, pss_entry),
/* 0x002AC03C :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000001c, cotmc_entry),
/* 0x002AC048 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000001d, totwc_entry),
/* 0x002AC054 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000001e, bowser_1_entry),
/* 0x002AC060 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x0000001f, wmotr_entry),
/* 0x002AC06C :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000021, bowser_2_entry),
/* 0x002AC078 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000022, bowser_3_entry),
/* 0x002AC084 :: 07040000 */                                                     JUMP_IF(/* op */ 0x02, /* arg */ 0x00000024, ttm_entry),
/* 0x002AC090 :: 02040000 */                                                     EXIT(),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abed8
const LevelScript level_script_0x2abed8_entry[] = {
/* 0x002ABED8 :: 0110000E 004AC4B0 004AC570 0E000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x000e, /* start */ 0x004ac4b0, /* end */ 0x004ac570, level_ending_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abee8
const LevelScript level_script_0x2abee8_entry[] = {
/* 0x002ABEE8 :: 01100014 00269EA0 0026A3A0 14000078 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269f18_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abef8 -> level_script_0x269fa4
const LevelScript level_script_0x269fa4_entry[] = {
/* 0x00269FA4 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x00269FA8 :: 34040100 */                                                     BLACKOUT(/* active */ 0x01),
/* 0x00269FAC :: 16100000 8016F000 0021F4C0 00269EA0 */                          // FIXED_LOAD(/* loadAddr */ 0x8016f000, /* start */ 0x0021f4c0, /* end */ 0x00269ea0),
/* 0x00269FBC :: 19040003 */                                                     LOAD_MARIO_HEAD(/* sethead */ 0x0003),
/* 0x00269FC0 :: 170C0013 00219E00 0021F4C0 */                                   // LOAD_RAW(/* seg */ 0x0013, /* start */ 0x00219e00, /* end */ 0x0021f4c0),
/* 0x00269FCC :: 1A0C000A 00B105FC 00B178B5 */                                   LOAD_MIO0_TEXTURE(/* seg */ 0x0a, /* start */ 0x00b105fc, /* end */ 0x00b178b5),
/* 0x00269FD8 :: 01100014 00269EA0 0026A3A0 1400020C */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x26a0ac_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abef8
const LevelScript level_script_0x2abef8_entry[] = {
/* 0x002ABEF8 :: 01100014 00269EA0 0026A3A0 1400020C */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269fa4_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abec8
const LevelScript level_script_0x2abec8_entry[] = {
/* 0x002ABEC8 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269ea0_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abf08 -> level_script_0x26a030 -> level_script_0x26a148
const LevelScript level_script_0x26a148_entry[] = {
/* 0x0026A148 :: 380400BE */                                                     STOP_MUSIC(/* fadeOutTime */ 0x00be),
/* 0x0026A14C :: 33080110 00000000 */                                            TRANSITION(/* transType */ 0x01, /* time */ 0x10, /* colorR */ 0x00, /* colorG */ 0x00, /* colorB */ 0x00),
/* 0x0026A154 :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x0026A158 :: 1C040000 */                                                     CLEAR_LEVEL(),
/* 0x0026A15C :: 03040002 */                                                     SLEEP(/* frames */ 0x0002),
/* 0x0026A160 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269ea0_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abf08 -> level_script_0x26a030 -> level_script_0x26a0fc
const LevelScript level_script_0x26a0fc_entry[] = {
/* 0x0026A0FC :: 380400BE */                                                     STOP_MUSIC(/* fadeOutTime */ 0x00be),
/* 0x0026A100 :: 33080110 FFFFFF00 */                                            TRANSITION(/* transType */ 0x01, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x0026A108 :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x0026A10C :: 1C040000 */                                                     CLEAR_LEVEL(),
/* 0x0026A110 :: 03040002 */                                                     SLEEP(/* frames */ 0x0002),
/* 0x0026A114 :: 01100015 002ABCA0 002AC6B0 15000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0015, /* start */ 0x002abca0, /* end */ 0x002ac6b0, level_script_0x2abca0_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abf08 -> level_script_0x26a030
const LevelScript level_script_0x26a030_entry[] = {
/* 0x0026A030 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x0026A034 :: 170C0013 00219E00 0021F4C0 */                                   // LOAD_RAW(/* seg */ 0x0013, /* start */ 0x00219e00, /* end */ 0x0021f4c0),
/* 0x0026A040 :: 1A0C000A 00B105FC 00B178B5 */                                   LOAD_MIO0_TEXTURE(/* seg */ 0x0a, /* start */ 0x00b105fc, /* end */ 0x00b178b5),
/* 0x0026A04C :: 170C0007 00B02054 00B085FC */                                   // LOAD_RAW(/* seg */ 0x0007, /* start */ 0x00b02054, /* end */ 0x00b085fc),
/* 0x0026A058 :: 16100000 8016F000 0021F4C0 00269EA0 */                          // FIXED_LOAD(/* loadAddr */ 0x8016f000, /* start */ 0x0021f4c0, /* end */ 0x00269ea0),
/* 0x0026A068 :: 1D040000 */                                                     ALLOC_LEVEL_POOL(),
/* 0x0026A06C :: 1F080100 14000414 */                                            AREA(1, area_1_geo_14000414),
/* 0x0026A074 :: 20040000 */                                                     END_AREA(),
/* 0x0026A078 :: 1E040000 */                                                     FREE_LEVEL_POOL(),
/* 0x0026A07C :: 29040100 */                                                     LOAD_AREA(/* area */ 0x01),
/* 0x0026A080 :: 37040002 */                                                     SET_MENU_MUSIC(/* seq */ 0x0002),
/* 0x0026A084 :: 33080010 FFFFFF00 */                                            TRANSITION(/* transType */ 0x00, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x0026A08C :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x0026A090 :: 12080003 8016F5B0 */                                            CALL_LOOP(/* arg */ 0x0003, /* func */ 0x8016f5b0),
/* 0x0026A098 :: 01100014 00269EA0 0026A3A0 14000000 */                          JUMP_IF(/* op */ 0x02, /* arg */ 0xffffffff, level_script_0x26a148_entry),
/* 0x0026A0A4 :: 01100015 002ABCA0 002AC6B0 15000000 */                          JUMP(level_script_0x26a0fc_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> level_script_0x2abf08
const LevelScript level_script_0x2abf08_entry[] = {
/* 0x002ABF08 :: 01100015 002ABCA0 002AC6B0 15000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x26a030_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58
const LevelScript level_script_0x2abe58_entry[] = {
/* 0x002ABE58 :: 1E040000 */                                                     FREE_LEVEL_POOL(),
/* 0x002ABE5C :: 11080000 8024BD5C */                                            CALL(/* arg */ 0x0000, /* func */ 0x8024bd5c),
/* 0x002ABE64 :: 0A040000 */                                                     LOOP_BEGIN(),
/* 0x002ABE68 :: 02040000 */                                                         EXECUTE(/* seg */ 0x0014, /* start */ 0x002a6120, /* end */ 0x002a65b0, level_script_0x2a6238_entry),
/* 0x002ABE78 :: 02040000 */                                                         JUMP_LINK(level_script_0x2abf18_entry),
/* 0x002ABE80 :: 03040001 */                                                         SLEEP(/* frames */ 0x0001),
/* 0x002ABE84 :: 0B080400 00000000 */                                            LOOP_UNTIL(/* op */ 0x04, /* arg */ 0x00000000),
/* 0x002ABE8C :: 0110000E 004AC4B0 004AC570 0E000000 */                          JUMP_IF(/* op */ 0x02, /* arg */ 0xffffffff, level_script_0x2abed8_entry),
/* 0x002ABE98 :: 01100014 00269EA0 0026A3A0 14000078 */                          JUMP_IF(/* op */ 0x02, /* arg */ 0xfffffffe, level_script_0x2abee8_entry),
/* 0x002ABEA4 :: 01100014 00269EA0 0026A3A0 1400020C */                          JUMP_IF(/* op */ 0x02, /* arg */ 0xfffffffd, level_script_0x2abef8_entry),
/* 0x002ABEB0 :: 01100014 00269EA0 0026A3A0 14000000 */                          JUMP_IF(/* op */ 0x02, /* arg */ 0xfffffff8, level_script_0x2abec8_entry),
/* 0x002ABEBC :: 01100015 002ABCA0 002AC6B0 15000000 */                          JUMP_IF(/* op */ 0x02, /* arg */ 0xfffffff7, level_script_0x2abf08_entry),
/* 0x002ABEC8 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269ea0_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20
const LevelScript level_script_0xad4a20_entry[] = {
/* 0x00AD4A20 :: 2208008A 16000ED4 */                                            LOAD_MODEL_FROM_GEO(MODEL_DIRT_ANIMATION, geo_16000ED4),
/* 0x00AD4A28 :: 2208008B 16000F24 */                                            LOAD_MODEL_FROM_GEO(MODEL_CARTOON_STAR, geo_16000F24),
/* 0x00AD4A30 :: 2208007B 0301DBF8 */                                            LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, geo_0301DBF8),
/* 0x00AD4A38 :: 21080092 0301FC98 */                                            // LOAD_MODEL_FROM_DL(0x92, dl_0301FC98, 0x00),
/* 0x00AD4A40 :: 21080097 03020860 */                                            // LOAD_MODEL_FROM_DL(0x97, dl_03020860, 0x00),
/* 0x00AD4A48 :: 22080098 030212F4 */                                            LOAD_MODEL_FROM_GEO(0x98, geo_030212F4),
/* 0x00AD4A50 :: 22080099 030225E4 */                                            LOAD_MODEL_FROM_GEO(0x99, geo_030225E4),
/* 0x00AD4A58 :: 220800F1 030226D4 */                                            LOAD_MODEL_FROM_GEO(0xf1, geo_030226D4),
/* 0x00AD4A60 :: 220800F0 0302272C */                                            LOAD_MODEL_FROM_GEO(0xf0, geo_0302272C),
/* 0x00AD4A68 :: 220800F2 03022708 */                                            LOAD_MODEL_FROM_GEO(0xf2, geo_03022708),
/* 0x00AD4A70 :: 21080030 005F8560 */                                            // LOAD_MODEL_FROM_DL(0x30, dl_005F8560, 0x00),
/* 0x00AD4A78 :: 2108002F 005F9AC0 */                                            // LOAD_MODEL_FROM_DL(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, dl_005F9AC0, 0x00),
/* 0x00AD4A80 :: 2208002A 005F9FE0 */                                            LOAD_MODEL_FROM_GEO(MODEL_UNKNOWN_DOOR_2A, geo_005F9FE0),
/* 0x00AD4A88 :: 2108002B 005FD8B0 */                                            // LOAD_MODEL_FROM_DL(MODEL_UNKNOWN_DOOR_2B, dl_005FD8B0, 0x00),
/* 0x00AD4A90 :: 2108002C 00600460 */                                            // LOAD_MODEL_FROM_DL(MODEL_WF_TOWER_TRAPEZOID_PLATORM, dl_00600460, 0x00),
/* 0x00AD4A98 :: 2208002D 00603670 */                                            LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, geo_00603670),
/* 0x00AD4AA0 :: 2108002E 00606660 */                                            // LOAD_MODEL_FROM_DL(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, dl_00606660, 0x00),
/* 0x00AD4AA8 :: 10080000 00000000 */                                            // SKIP_NOP(),
/* 0x00AD4AB0 :: 10080000 00000000 */                                            // SKIP_NOP(),
/* 0x00AD4AB8 :: 01100014 00269EA0 0026A3A0 14000000 */                          JUMP(level_script_0x2abe58_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0
const LevelScript level_script_0x2abca0_entry[] = {
/* 0x002ABCA0 :: 170C0004 03F00000 03F50000 */                                   // LOAD_RAW(/* seg */ 0x0004, /* start */ 0x03f00000, /* end */ 0x03f50000),
/* 0x002ABCAC :: 170C0003 00AB240C 00AE5714 */                                   // LOAD_RAW(/* seg */ 0x0003, /* start */ 0x00ab240c, /* end */ 0x00ae5714),
/* 0x002ABCB8 :: 170C0017 001279B0 0012A7E0 */                                   // LOAD_RAW(/* seg */ 0x0017, /* start */ 0x001279b0, /* end */ 0x0012a7e0),
/* 0x002ABCC4 :: 170C0016 00218DA0 00219E00 */                                   // LOAD_RAW(/* seg */ 0x0016, /* start */ 0x00218da0, /* end */ 0x00219e00),
/* 0x002ABCD0 :: 170C0013 00219E00 0021F4C0 */                                   // LOAD_RAW(/* seg */ 0x0013, /* start */ 0x00219e00, /* end */ 0x0021f4c0),
/* 0x002ABCDC :: 1D040000 */                                                     ALLOC_LEVEL_POOL(),
/* 0x002ABCE0 :: 22080001 17002DD4 */                                            LOAD_MODEL_FROM_GEO(MODEL_MARIO, geo_17002DD4),
/* 0x002ABCE8 :: 22080096 17000038 */                                            LOAD_MODEL_FROM_GEO(MODEL_SMOKE, geo_17000038),
/* 0x002ABCF0 :: 22080095 170001BC */                                            LOAD_MODEL_FROM_GEO(MODEL_SPARKLES, geo_170001BC),
/* 0x002ABCF8 :: 220800A8 17000000 */                                            LOAD_MODEL_FROM_GEO(MODEL_BUBBLE, geo_17000000),
/* 0x002ABD00 :: 220800A5 1700009C */                                            LOAD_MODEL_FROM_GEO(MODEL_SMALL_WATER_SPLASH, geo_1700009C),
/* 0x002ABD08 :: 220800A6 17000124 */                                            LOAD_MODEL_FROM_GEO(MODEL_IDLE_WATER_WAVE, geo_17000124),
/* 0x002ABD10 :: 220800A7 17000230 */                                            LOAD_MODEL_FROM_GEO(MODEL_WATER_SPLASH, geo_17000230),
/* 0x002ABD18 :: 220800A3 17000168 */                                            LOAD_MODEL_FROM_GEO(MODEL_WAVE_TRAIL, geo_17000168),
/* 0x002ABD20 :: 22080074 1600013C */                                            LOAD_MODEL_FROM_GEO(MODEL_YELLOW_COIN, geo_1600013C),
/* 0x002ABD28 :: 2208007A 16000EA0 */                                            LOAD_MODEL_FROM_GEO(MODEL_STAR, geo_16000EA0),
/* 0x002ABD30 :: 22080079 16000F6C */                                            LOAD_MODEL_FROM_GEO(MODEL_TRANSPARENT_STAR, geo_16000F6C),
/* 0x002ABD38 :: 2208007C 16000FB4 */                                            LOAD_MODEL_FROM_GEO(MODEL_WOODEN_SIGNPOST, geo_16000FB4),
/* 0x002ABD40 :: 210840A4 04032A18 */                                            // LOAD_MODEL_FROM_DL(MODEL_WHITE_PARTICLE_SMALL, dl_04032A18, 0x04),
/* 0x002ABD48 :: 22080090 16000B2C */                                            LOAD_MODEL_FROM_GEO(MODEL_RED_FLAME, geo_16000B2C),
/* 0x002ABD50 :: 22080091 16000B8C */                                            LOAD_MODEL_FROM_GEO(MODEL_BLUE_FLAME, geo_16000B8C),
/* 0x002ABD58 :: 22080094 17000084 */                                            LOAD_MODEL_FROM_GEO(MODEL_BURN_SMOKE, geo_17000084),
/* 0x002ABD60 :: 220800A2 16000C8C */                                            LOAD_MODEL_FROM_GEO(MODEL_LEAVES, geo_16000C8C),
/* 0x002ABD68 :: 220800AA 1700001C */                                            LOAD_MODEL_FROM_GEO(MODEL_PURPLE_MARBLE, geo_1700001C),
/* 0x002ABD70 :: 220800B9 16000C44 */                                            LOAD_MODEL_FROM_GEO(MODEL_FISH, geo_16000C44),
/* 0x002ABD78 :: 220800BA 16000BEC */                                            LOAD_MODEL_FROM_GEO(MODEL_FISH_SHADOW, geo_16000BEC),
/* 0x002ABD80 :: 2208008F 17000284 */                                            LOAD_MODEL_FROM_GEO(MODEL_SPARKLES_ANIMATION, geo_17000284),
/* 0x002ABD88 :: 2108409F 0302BCD0 */                                            // LOAD_MODEL_FROM_DL(MODEL_SAND_DUST, dl_0302BCD0, 0x04),
/* 0x002ABD90 :: 220800BB 160000A8 */                                            LOAD_MODEL_FROM_GEO(MODEL_BUTTERFLY, geo_160000A8),
/* 0x002ABD98 :: 2208009C 17000084 */                                            LOAD_MODEL_FROM_GEO(MODEL_BURN_SMOKE_UNUSED, geo_17000084),
/* 0x002ABDA0 :: 210840A1 0301CB00 */                                            // LOAD_MODEL_FROM_DL(MODEL_PEBBLE, dl_0301CB00, 0x04),
/* 0x002ABDA8 :: 2208008E 16000000 */                                            LOAD_MODEL_FROM_GEO(MODEL_MIST, geo_16000000),
/* 0x002ABDB0 :: 220800E0 16000020 */                                            LOAD_MODEL_FROM_GEO(MODEL_WHITE_PUFF, geo_16000020),
/* 0x002ABDB8 :: 2108409E 0302C8A0 */                                            // LOAD_MODEL_FROM_DL(MODEL_WHITE_PARTICLE_DL, dl_0302C8A0, 0x04),
/* 0x002ABDC0 :: 220800A0 16000F98 */                                            LOAD_MODEL_FROM_GEO(MODEL_WHITE_PARTICLE, geo_16000F98),
/* 0x002ABDC8 :: 22080075 160001A0 */                                            LOAD_MODEL_FROM_GEO(MODEL_YELLOW_COIN_NO_SHADOW, geo_160001A0),
/* 0x002ABDD0 :: 22080076 16000200 */                                            LOAD_MODEL_FROM_GEO(MODEL_BLUE_COIN, geo_16000200),
/* 0x002ABDD8 :: 22080077 16000264 */                                            LOAD_MODEL_FROM_GEO(MODEL_BLUE_COIN_NO_SHADOW, geo_16000264),
/* 0x002ABDE0 :: 22080085 16000DA8 */                                            LOAD_MODEL_FROM_GEO(MODEL_MARIOS_WINGED_METAL_CAP, geo_16000DA8),
/* 0x002ABDE8 :: 22080086 16000CF0 */                                            LOAD_MODEL_FROM_GEO(MODEL_MARIOS_METAL_CAP, geo_16000CF0),
/* 0x002ABDF0 :: 22080087 16000D3C */                                            LOAD_MODEL_FROM_GEO(MODEL_MARIOS_WING_CAP, geo_16000D3C),
/* 0x002ABDF8 :: 22080088 16000CA4 */                                            LOAD_MODEL_FROM_GEO(MODEL_MARIOS_CAP, geo_16000CA4),
/* 0x002ABE00 :: 22080088 16000CA4 */                                            LOAD_MODEL_FROM_GEO(MODEL_MARIOS_CAP, geo_16000CA4),
/* 0x002ABE08 :: 220800C8 16000AB0 */                                            LOAD_MODEL_FROM_GEO(MODEL_BOWSER_KEY_CUTSCENE, geo_16000AB0),
/* 0x002ABE10 :: 220800CC 16000A84 */                                            LOAD_MODEL_FROM_GEO(MODEL_BOWSER_KEY, geo_16000A84),
/* 0x002ABE18 :: 220800CB 16000B10 */                                            LOAD_MODEL_FROM_GEO(MODEL_RED_FLAME_SHADOW, geo_16000B10),
/* 0x002ABE20 :: 220800D4 16000E84 */                                            LOAD_MODEL_FROM_GEO(MODEL_1UP, geo_16000E84),
/* 0x002ABE28 :: 220800D7 160002C4 */                                            LOAD_MODEL_FROM_GEO(MODEL_RED_COIN, geo_160002C4),
/* 0x002ABE30 :: 220800D8 16000328 */                                            LOAD_MODEL_FROM_GEO(MODEL_RED_COIN_NO_SHADOW, geo_16000328),
/* 0x002ABE38 :: 220800DB 16000E14 */                                            LOAD_MODEL_FROM_GEO(MODEL_NUMBER, geo_16000E14),
/* 0x002ABE40 :: 220800CD 16000040 */                                            LOAD_MODEL_FROM_GEO(MODEL_EXPLOSION, geo_16000040),
/* 0x002ABE48 :: 11080000 8030C4B0 */                                            CALL(/* arg */ 0x0000, /* func */ 0x8030c4b0),
/* 0x002ABE50 :: 01100014 00269EA0 0026A3A0 14000000 */                          JUMP(level_script_0xad4a20_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120
const LevelScript level_script_0x2a6120_entry[] = {
/* 0x002A6120 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x002A6124 :: 16100000 8016F000 0021F4C0 00269EA0 */                          // FIXED_LOAD(/* loadAddr */ 0x8016f000, /* start */ 0x0021f4c0, /* end */ 0x00269ea0),
/* 0x002A6134 :: 170C0007 00B1F8B5 00B2D715 */                                   // LOAD_RAW(/* seg */ 0x0007, /* start */ 0x00b1f8b5, /* end */ 0x00b2d715),
/* 0x002A6140 :: 170C0013 00219E00 0021F4C0 */                                   // LOAD_RAW(/* seg */ 0x0013, /* start */ 0x00219e00, /* end */ 0x0021f4c0),
/* 0x002A614C :: 1D040000 */                                                     ALLOC_LEVEL_POOL(),
/* 0x002A6150 :: 22080003 140001D0 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03 /* or MODEL_MAIN_MENU_MARIO_SAVE_BUTTON */, geo_140001D0),
/* 0x002A6158 :: 22080004 14000290 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04 /* or MODEL_MAIN_MENU_RED_ERASE_BUTTON */, geo_14000290),
/* 0x002A6160 :: 22080005 140002B8 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05 /* or MODEL_MAIN_MENU_BLUE_COPY_BUTTON */, geo_140002B8),
/* 0x002A6168 :: 22080006 140002E0 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06 /* or MODEL_MAIN_MENU_YELLOW_FILE_BUTTON */, geo_140002E0),
/* 0x002A6170 :: 22080007 14000308 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07 /* or MODEL_MAIN_MENU_GREEN_SCORE_BUTTON */, geo_14000308),
/* 0x002A6178 :: 22080008 14000200 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08 /* or MODEL_MAIN_MENU_MARIO_SAVE_BUTTON_FADE */, geo_14000200),
/* 0x002A6180 :: 22080009 14000230 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09 /* or MODEL_MAIN_MENU_MARIO_NEW_BUTTON, MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM */, geo_14000230),
/* 0x002A6188 :: 2208000A 14000260 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A /* or MODEL_MAIN_MENU_MARIO_NEW_BUTTON_FADE */, geo_14000260),
/* 0x002A6190 :: 2208000B 14000330 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B /* or MODEL_MAIN_MENU_PURPLE_SOUND_BUTTON */, geo_14000330),
/* 0x002A6198 :: 2208000C 14000358 */                                            LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C /* or MODEL_MAIN_MENU_GENERIC_BUTTON */, geo_14000358),
/* 0x002A61A0 :: 1F080100 14000380 */                                            AREA(1, area_1_geo_14000380),
/* 0x002A61A8 :: 24181F00 00000000 B5C80000 00000000 04000000 13003008 */            OBJECT(MODEL_NONE, /* posX */ 0, /* posY */ 0, /* posZ */ -19000, /* angleX */ 0, /* angleY */ 0, /* angleZ */ 0, /* behParam */ 0x04000000, bhvMenuButtonManager),
/* 0x002A61C0 :: 24181F06 00000000 B5C80000 00000000 04000000 13002FC0 */            OBJECT(MODEL_LEVEL_GEOMETRY_06 /* or MODEL_MAIN_MENU_YELLOW_FILE_BUTTON */, /* posX */ 0, /* posY */ 0, /* posZ */ -19000, /* angleX */ 0, /* angleY */ 0, /* angleZ */ 0, /* behParam */ 0x04000000, bhvYellowBackgroundInMenu),
/* 0x002A61D8 :: 2E080000 0700DE30 */                                                TERRAIN(area_1_collision_0x0700DE30),
/* 0x002A61E0 :: 20040000 */                                                     END_AREA(),
/* 0x002A61E4 :: 1E040000 */                                                     FREE_LEVEL_POOL(),
/* 0x002A61E8 :: 29040100 */                                                     LOAD_AREA(/* area */ 0x01),
/* 0x002A61EC :: 37040021 */                                                     SET_MENU_MUSIC(/* seq */ 0x0021),
/* 0x002A61F0 :: 33080010 FFFFFF00 */                                            TRANSITION(/* transType */ 0x00, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x002A61F8 :: 11080000 801766DC */                                            CALL(/* arg */ 0x0000, /* func */ 0x801766dc),
/* 0x002A6200 :: 12080000 801768A0 */                                            CALL_LOOP(/* arg */ 0x0000, /* func */ 0x801768a0),
/* 0x002A6208 :: 3C040000 */                                                     GET_OR_SET(/* op */ 0x00, /* var */ 0x00),
/* 0x002A620C :: 380400BE */                                                     STOP_MUSIC(/* fadeOutTime */ 0x00be),
/* 0x002A6210 :: 33080110 FFFFFF00 */                                            TRANSITION(/* transType */ 0x01, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x002A6218 :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x002A621C :: 1C040000 */                                                     CLEAR_LEVEL(),
/* 0x002A6220 :: 04040001 */                                                     SLEEP_BEFORE_EXIT(/* frames */ 0x0001),
/* 0x002A6224 :: 13040010 */                                                     SET_REG(/* value */ 0x0010),
/* 0x002A6228 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0015, /* start */ 0x002abca0, /* end */ 0x002ac6b0, level_script_0x2abca0_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac
const LevelScript level_script_0x26a0ac_entry[] = {
/* 0x0026A0AC :: 380400BE */                                                     STOP_MUSIC(/* fadeOutTime */ 0x00be),
/* 0x0026A0B0 :: 33080110 FFFFFF00 */                                            TRANSITION(/* transType */ 0x01, /* time */ 0x10, /* colorR */ 0xff, /* colorG */ 0xff, /* colorB */ 0xff),
/* 0x0026A0B8 :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x0026A0BC :: 1C040000 */                                                     CLEAR_LEVEL(),
/* 0x0026A0C0 :: 03040002 */                                                     SLEEP(/* frames */ 0x0002),
/* 0x0026A0C4 :: 13040010 */                                                     SET_REG(/* value */ 0x0010),
/* 0x0026A0C8 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x002a6120, /* end */ 0x002a65b0, level_script_0x2a6120_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18
const LevelScript level_script_0x269f18_entry[] = {
/* 0x00269F18 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x00269F1C :: 34040100 */                                                     BLACKOUT(/* active */ 0x01),
/* 0x00269F20 :: 16100000 8016F000 0021F4C0 00269EA0 */                          // FIXED_LOAD(/* loadAddr */ 0x8016f000, /* start */ 0x0021f4c0, /* end */ 0x00269ea0),
/* 0x00269F30 :: 19040002 */                                                     LOAD_MARIO_HEAD(/* sethead */ 0x0002),
/* 0x00269F34 :: 170C0013 00219E00 0021F4C0 */                                   // LOAD_RAW(/* seg */ 0x0013, /* start */ 0x00219e00, /* end */ 0x0021f4c0),
/* 0x00269F40 :: 1A0C000A 00B105FC 00B178B5 */                                   LOAD_MIO0_TEXTURE(/* seg */ 0x0a, /* start */ 0x00b105fc, /* end */ 0x00b178b5),
/* 0x00269F4C :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x26a0ac_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0
const LevelScript level_script_0x269ea0_entry[] = {
/* 0x00269EA0 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x00269EA4 :: 16100000 8016F000 0021F4C0 00269EA0 */                          // FIXED_LOAD(/* loadAddr */ 0x8016f000, /* start */ 0x0021f4c0, /* end */ 0x00269ea0),
/* 0x00269EB4 :: 170C0013 00219E00 0021F4C0 */                                   // LOAD_RAW(/* seg */ 0x0013, /* start */ 0x00219e00, /* end */ 0x0021f4c0),
/* 0x00269EC0 :: 170C0007 00AED714 00B02054 */                                   // LOAD_RAW(/* seg */ 0x0007, /* start */ 0x00aed714, /* end */ 0x00b02054),
/* 0x00269ECC :: 1D040000 */                                                     ALLOC_LEVEL_POOL(),
/* 0x00269ED0 :: 1F080100 140002D0 */                                            AREA(1, area_1_geo_140002D0),
/* 0x00269ED8 :: 20040000 */                                                     END_AREA(),
/* 0x00269EDC :: 1E040000 */                                                     FREE_LEVEL_POOL(),
/* 0x00269EE0 :: 29040100 */                                                     LOAD_AREA(/* area */ 0x01),
/* 0x00269EE4 :: 11080000 8016F5B0 */                                            CALL(/* arg */ 0x0000, /* func */ 0x8016f5b0),
/* 0x00269EEC :: 0304004B */                                                     SLEEP(/* frames */ 0x004b),
/* 0x00269EF0 :: 33080110 00000000 */                                            TRANSITION(/* transType */ 0x01, /* time */ 0x10, /* colorR */ 0x00, /* colorG */ 0x00, /* colorB */ 0x00),
/* 0x00269EF8 :: 03040010 */                                                     SLEEP(/* frames */ 0x0010),
/* 0x00269EFC :: 2A040100 */                                                     CMD2A(/* unk2 */ 0x01),
/* 0x00269F00 :: 1C040000 */                                                     CLEAR_LEVEL(),
/* 0x00269F04 :: 03040002 */                                                     SLEEP(/* frames */ 0x0002),
/* 0x00269F08 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXIT_AND_EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269f18_entry),
};


// level_script_0x108a10 -> level_script_0x0
const LevelScript level_script_0x0_entry[] = {
};


// level_script_0x108a10
const LevelScript level_script_0x108a10_entry[] = {
/* 0x00108A10 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x00108A14 :: 03040002 */                                                     SLEEP(/* frames */ 0x0002),
/* 0x00108A18 :: 34040000 */                                                     BLACKOUT(/* active */ 0x00),
/* 0x00108A1C :: 13040000 */                                                     SET_REG(/* value */ 0x0000),
/* 0x00108A20 :: 01100014 00269EA0 0026A3A0 14000000 */                          EXECUTE(/* seg */ 0x0014, /* start */ 0x00269ea0, /* end */ 0x0026a3a0, level_script_0x269ea0_entry),
/* 0x00108A30 :: 05080000 10000000 */                                            JUMP(level_script_0x0_entry),
};
