const Vtx totwc_vertex_07007930_n4[] = {
    {{{  1024,    512,      0}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -1023,    512,      0}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -1023,   -511,      0}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  1024,   -511,      0}, 0, {   990,    990}, {255, 255, 255, 255}}},
};



const Gfx totwc_dl_07007970[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x3),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ totwc_texture_07002000_011278AB_seg7),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ totwc_vertex_07007930_n4, /* count */ 0x4, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x0, /* v11 */ 0x2, /* v12 */ 0x3, /* flag1 */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx totwc_dl_070079A8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEIA, /* cycle2 */ G_CC_MODULATEIA),
    gsSPClearGeometryMode(/* flags */ G_CULL_BACK|G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_CLAMP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_CLAMP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ totwc_dl_07007970),
};

ALIGNED8 Texture totwc_texture_07002000_011278AB_seg7 = {
#include "totwc/totwc_texture_07002000_011278AB_seg7.inc.c"
};

