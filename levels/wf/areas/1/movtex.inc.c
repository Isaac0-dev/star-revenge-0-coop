static Movtex wf_area_1_movtex_water_0[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(7),
    MOV_TEX_4_BOX_TRIS(-285, 2359),
    MOV_TEX_4_BOX_TRIS(8278, 2359),
    MOV_TEX_4_BOX_TRIS(8278, 5731),
    MOV_TEX_4_BOX_TRIS(-285, 5731),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

static Movtex wf_area_1_movtex_water_1[] = {
    MOV_TEX_INIT_LOAD(1),
    MOV_TEX_ROT_SPEED(15),
    MOV_TEX_ROT_SCALE(7),
    MOV_TEX_4_BOX_TRIS(-4962, -11312),
    MOV_TEX_4_BOX_TRIS(4934, -11312),
    MOV_TEX_4_BOX_TRIS(4934, 2359),
    MOV_TEX_4_BOX_TRIS(-4962, 2359),
    MOV_TEX_ROT(ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(120),
    MOV_TEX_DEFINE(TEXTURE_WATER),
    MOV_TEX_END(),
};

const struct MovtexQuadCollection wf_area_1_water_type_0_collection[] = {
    { 0, wf_area_1_movtex_water_0 },
    { 1, wf_area_1_movtex_water_1 },
    { -1, NULL },
};

