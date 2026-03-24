// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> script_exec_level_table -> ending -> ending_script_0x4ac4b0 -> ending_script_0x4ac4f4
const LevelScript ending_script_0x4ac4f4_entry[] = {
/* 0x004AC4F4 :: 03040001 */                                                     SLEEP(/* frames */ 0x0001),
/* 0x004AC4F8 :: 05080000 0E000044 */                                            JUMP(ending_script_0x4ac4f4_entry),
};


// level_script_0x108a10 -> level_script_0x269ea0 -> level_script_0x269f18 -> level_script_0x26a0ac -> level_script_0x2a6120 -> level_script_0x2abca0 -> level_script_0xad4a20 -> level_script_0x2abe58 -> script_exec_level_table -> ending -> ending_script_0x4ac4b0
const LevelScript level_ending_entry[] = {
/* 0x004AC4B0 :: 1B040000 */                                                     INIT_LEVEL(),
/* 0x004AC4B4 :: 170C0007 010BA69B 010E19EB */                                   // LOAD_RAW(/* seg */ 0x0007, /* start */ 0x010ba69b, /* end */ 0x010e19eb),
/* 0x004AC4C0 :: 1D040000 */                                                     ALLOC_LEVEL_POOL(),
/* 0x004AC4C4 :: 1F080100 0E000050 */                                            AREA(1, ending_area_1_geo_0E000050),
/* 0x004AC4CC :: 20040000 */                                                     END_AREA(),
/* 0x004AC4D0 :: 1E040000 */                                                     FREE_LEVEL_POOL(),
/* 0x004AC4D4 :: 0304003C */                                                     SLEEP(/* frames */ 0x003c),
/* 0x004AC4D8 :: 34040000 */                                                     BLACKOUT(/* active */ 0x00),
/* 0x004AC4DC :: 29040100 */                                                     LOAD_AREA(/* area */ 0x01),
/* 0x004AC4E0 :: 3308004B 00000000 */                                            TRANSITION(/* transType */ 0x00, /* time */ 0x4b, /* colorR */ 0x00, /* colorG */ 0x00, /* colorB */ 0x00),
/* 0x004AC4E8 :: 03040078 */                                                     SLEEP(/* frames */ 0x0078),
/* 0x004AC4EC :: 11080000 8024BFA0 */                                            CALL(/* arg */ 0x0000, lvl_init_or_update),
/* 0x004AC4F4 :: 03040001 */                                                     SLEEP(/* frames */ 0x0001),
/* 0x004AC4F8 :: 05080000 0E000044 */                                            JUMP(ending_script_0x4ac4f4_entry),
};
