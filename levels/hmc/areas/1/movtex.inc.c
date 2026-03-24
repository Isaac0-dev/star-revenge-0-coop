static Movtex hmc_area_1_movtex_water_3[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(5),
    MOV_TEX_4_BOX_TRIS(-6980, -3300),
    MOV_TEX_4_BOX_TRIS(-5630, -3300),
    MOV_TEX_4_BOX_TRIS(-5630, -1945),
    MOV_TEX_4_BOX_TRIS(-6980, -1945),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

static Movtex hmc_area_1_movtex_water_4[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(5),
    MOV_TEX_4_BOX_TRIS(-8555, -1945),
    MOV_TEX_4_BOX_TRIS(-6980, -1945),
    MOV_TEX_4_BOX_TRIS(-6980, 1880),
    MOV_TEX_4_BOX_TRIS(-8555, 1880),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

static Movtex hmc_area_1_movtex_water_5[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(5),
    MOV_TEX_4_BOX_TRIS(-6980, -1945),
    MOV_TEX_4_BOX_TRIS(-5630, -1945),
    MOV_TEX_4_BOX_TRIS(-5630, -311),
    MOV_TEX_4_BOX_TRIS(-6980, -311),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

static Movtex hmc_area_1_movtex_water_6[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(5),
    MOV_TEX_4_BOX_TRIS(-6980, -311),
    MOV_TEX_4_BOX_TRIS(-6034, -311),
    MOV_TEX_4_BOX_TRIS(-6034, 530),
    MOV_TEX_4_BOX_TRIS(-6980, 530),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

static Movtex hmc_area_1_movtex_water_7[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(5),
    MOV_TEX_4_BOX_TRIS(-6980, 530),
    MOV_TEX_4_BOX_TRIS(-5630, 530),
    MOV_TEX_4_BOX_TRIS(-5630, 1880),
    MOV_TEX_4_BOX_TRIS(-6980, 1880),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

static Movtex hmc_area_1_movtex_water_8[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(5),
    MOV_TEX_4_BOX_TRIS(6014, -3956),
    MOV_TEX_4_BOX_TRIS(7343, -3956),
    MOV_TEX_4_BOX_TRIS(7343, -2180),
    MOV_TEX_4_BOX_TRIS(6014, -2180),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

const struct MovtexQuadCollection hmc_area_1_water_type_0_collection[] = {
    { 516, hmc_area_1_movtex_water_3 },
    { 5, hmc_area_1_movtex_water_4 },
    { 6, hmc_area_1_movtex_water_5 },
    { 7, hmc_area_1_movtex_water_6 },
    { 8, hmc_area_1_movtex_water_7 },
    { -1, NULL },
};

const struct MovtexQuadCollection hmc_area_1_water_manual_collection[] = {
    { 8, hmc_area_1_movtex_water_8 },
    { -1, NULL },
};

