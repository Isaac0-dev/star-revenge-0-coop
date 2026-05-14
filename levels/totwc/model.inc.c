const Vtx totwc_vertex_07007930_n4[] = {
    {{{  1024,    512,      0}, 0, {   990,      0}, {255, 255, 255, 255}}},
    {{{ -1023,    512,      0}, 0, {     0,      0}, {255, 255, 255, 255}}},
    {{{ -1023,   -511,      0}, 0, {     0,    990}, {255, 255, 255, 255}}},
    {{{  1024,   -511,      0}, 0, {   990,    990}, {255, 255, 255, 255}}},
};



const Gfx totwc_dl_07007970[] = {
/* BE000000 00000000 */     gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0x3),
/* 000070FD 00200007 */     gsDPSetTextureImage(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ totwc_texture_07002000_011278AB_seg7),
/* 000000E6 00000000 */     gsDPLoadSync(),
/* 000000F3 00F13F07 */     gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
/* 40003004 30790007 */     gsSPVertex(/* vertices */ totwc_vertex_07007930_n4, /* count */ 0x4, /* v0 */ 0x0),
/* 000000BF 1E140000 */     gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x0, /* v11 */ 0x2, /* v12 */ 0x3, /* flag1 */ 0x0),
/* 000000B8 00000000 */     gsSPEndDisplayList(),
};

const Gfx totwc_dl_070079A8[] = {
/* 000000E7 00000000 */     gsDPPipeSync(),
/* 241812FC FFFF33FF */     gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEIA, /* cycle2 */ G_CC_MODULATEIA),
/* 000000B6 00200200 */     gsSPClearGeometryMode(/* flags */ G_CULL_BACK|G_LIGHTING),
/* 000070F5 00000007 */     gsDPSetTile(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
/* 010000BB FFFFFFFF */     gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
/* 000000E8 00000000 */     gsDPTileSync(),
/* 001070F5 50420900 */     gsDPSetTile(/* fmt */ G_IM_FMT_IA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_CLAMP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_CLAMP, /* masks */ 0x5, /* shifts */ 0x0),
/* 000000F2 7CC00700 */     gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
/* 00000006 70790007 */     gsSPDisplayList(/* dl */ totwc_dl_07007970),
/* 000000BB FFFFFFFF */     gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_OFF),
/* 000000E7 00000000 */     gsDPPipeSync(),
/* FFFFFFFC 3C79FEFF */     gsDPSetCombineMode(/* cycle1 */ G_CC_SHADE, /* cycle2 */ G_CC_SHADE),
/* 000000B7 00200200 */     gsSPSetGeometryMode(/* flags */ G_CULL_BACK|G_LIGHTING),
/* 000000B8 00000000 */     gsSPEndDisplayList(),
};

ALIGNED8 Texture totwc_texture_07002000_011278AB_seg7 = {
#include "totwc/totwc_texture_07002000_011278AB_seg7.inc.c"
};

