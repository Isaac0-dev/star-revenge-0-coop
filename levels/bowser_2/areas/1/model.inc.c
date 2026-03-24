const Vtx bowser_2_area_1_vertex_070010B0_n16[] = {
    {{{  6546,   -511,   2618}, 0, {  4910,    248}, {255, 255, 255, 255}}},
    {{{  6480,  -3071,  -2776}, 0, {  8112,    772}, {255, 255, 255, 255}}},
    {{{  6480,   -511,  -2776}, 0, {  8100,    232}, {255, 255, 255, 255}}},
    {{{ -6545,   -511,  -2617}, 0, { 17484,    232}, {255, 255, 255, 255}}},
    {{{ -6545,  -3071,  -2617}, 0, { 17472,    772}, {255, 255, 255, 255}}},
    {{{ -6479,  -3071,   2777}, 0, { 20664,    790}, {255, 255, 255, 255}}},
    {{{ -6479,   -511,   2777}, 0, { 20676,    248}, {255, 255, 255, 255}}},
    {{{ -2776,   -511,  -6479}, 0, { 14348,    220}, {255, 255, 255, 255}}},
    {{{ -2617,  -3071,   6546}, 0, { 23924,    800}, {255, 255, 255, 255}}},
    {{{ -2617,   -511,   6546}, 0, { 23930,    260}, {255, 255, 255, 255}}},
    {{{ -2776,  -3071,  -6479}, 0, { 14342,    762}, {255, 255, 255, 255}}},
    {{{  2618,   -511,  -6545}, 0, { 11236,    220}, {255, 255, 255, 255}}},
    {{{  2618,  -3071,  -6545}, 0, { 11240,    762}, {255, 255, 255, 255}}},
    {{{ -2776,   -511,  -6479}, 0, {   782,   1298}, {255, 255, 255, 255}}},
    {{{  2777,   -511,   6480}, 0, { -1526,  -4090}, {255, 255, 255, 255}}},
    {{{  6546,   -511,   2618}, 0, { -3092,  -2484}, {255, 255, 255, 255}}},
};



const Vtx bowser_2_area_1_vertex_070011B0_n16[] = {
    {{{  6546,   -511,   2618}, 0, {  4910,    248}, {255, 255, 255, 255}}},
    {{{  6546,  -3071,   2618}, 0, {  4924,    788}, {255, 255, 255, 255}}},
    {{{  6480,  -3071,  -2776}, 0, {  8112,    772}, {255, 255, 255, 255}}},
    {{{  2777,   -511,   6480}, 0, {  1658,    260}, {255, 255, 255, 255}}},
    {{{  2777,  -3071,   6480}, 0, {  1664,    800}, {255, 255, 255, 255}}},
    {{{ -2617,   -511,   6546}, 0, { 23930,    260}, {255, 255, 255, 255}}},
    {{{ -2617,  -3071,   6546}, 0, { 23924,    800}, {255, 255, 255, 255}}},
    {{{  2777,  -3071,   6480}, 0, { 27214,    800}, {255, 255, 255, 255}}},
    {{{  2777,   -511,   6480}, 0, { 27208,    260}, {255, 255, 255, 255}}},
    {{{ -2776,   -511,  -6479}, 0, {   782,   1298}, {255, 255, 255, 255}}},
    {{{ -6545,   -511,  -2617}, 0, {  2350,   -306}, {255, 255, 255, 255}}},
    {{{ -6479,   -511,   2777}, 0, {  2322,  -2550}, {255, 255, 255, 255}}},
    {{{ -2617,   -511,   6546}, 0, {   716,  -4116}, {255, 255, 255, 255}}},
    {{{  2777,   -511,   6480}, 0, { -1526,  -4090}, {255, 255, 255, 255}}},
    {{{  6546,   -511,   2618}, 0, { -3092,  -2484}, {255, 255, 255, 255}}},
    {{{  6480,   -511,  -2776}, 0, { -3066,   -240}, {255, 255, 255, 255}}},
};



const Vtx bowser_2_area_1_vertex_070012B0_n3[] = {
    {{{ -2776,   -511,  -6479}, 0, {   782,   1298}, {255, 255, 255, 255}}},
    {{{  6480,   -511,  -2776}, 0, { -3066,   -240}, {255, 255, 255, 255}}},
    {{{  2618,   -511,  -6545}, 0, { -1460,   1326}, {255, 255, 255, 255}}},
};



const Gfx bowser_2_area_1_dl_070016A0[] = {
    gsSPCullDisplayList(/* v0 */ 0x0, /* vn */ 0xF),
    gsDPSetTextureImage(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* width */ 0x1, /* texture_record */ bowser_2_area_1_texture_07000000_0115C4E7_seg7),
    gsDPLoadSync(),
    gsDPLoadBlock(/* tile */ G_TX_LOADTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x3FF, /* dxt */ 0x100),
    gsSPVertex(/* vertices */ bowser_2_area_1_vertex_070010B0_n16, /* count */ 0x10, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x3, /* v11 */ 0x4, /* v12 */ 0x5, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x3, /* v01 */ 0x5, /* v02 */ 0x6, /* flag0 */ 0x0, /* v10 */ 0x7, /* v11 */ 0x4, /* v12 */ 0x3, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x6, /* v01 */ 0x5, /* v02 */ 0x8, /* flag0 */ 0x0, /* v10 */ 0x6, /* v11 */ 0x8, /* v12 */ 0x9, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x7, /* v01 */ 0xA, /* v02 */ 0x4, /* flag0 */ 0x0, /* v10 */ 0xB, /* v11 */ 0xA, /* v12 */ 0x7, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0xB, /* v01 */ 0xC, /* v02 */ 0xA, /* flag0 */ 0x0, /* v10 */ 0x2, /* v11 */ 0xC, /* v12 */ 0xB, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x2, /* v01 */ 0x1, /* v02 */ 0xC, /* flag0 */ 0x0, /* v10 */ 0xD, /* v11 */ 0xE, /* v12 */ 0xF, /* flag1 */ 0x0),
    gsSPVertex(/* vertices */ bowser_2_area_1_vertex_070011B0_n16, /* count */ 0x10, /* v0 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x0, /* v01 */ 0x1, /* v02 */ 0x2, /* flag0 */ 0x0, /* v10 */ 0x3, /* v11 */ 0x1, /* v12 */ 0x0, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x3, /* v01 */ 0x4, /* v02 */ 0x1, /* flag0 */ 0x0, /* v10 */ 0x5, /* v11 */ 0x6, /* v12 */ 0x7, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x5, /* v01 */ 0x7, /* v02 */ 0x8, /* flag0 */ 0x0, /* v10 */ 0x9, /* v11 */ 0xA, /* v12 */ 0xB, /* flag1 */ 0x0),
    gsSP2Triangles(/* v00 */ 0x9, /* v01 */ 0xB, /* v02 */ 0xC, /* flag0 */ 0x0, /* v10 */ 0x9, /* v11 */ 0xC, /* v12 */ 0xD, /* flag1 */ 0x0),
    gsSP1Triangle(/* v0 */ 0x9, /* v1 */ 0xE, /* v2 */ 0xF, /* flag */ 0x0),
    gsSPVertex(/* vertices */ bowser_2_area_1_vertex_070012B0_n3, /* count */ 0x3, /* v0 */ 0x0),
    gsSP1Triangle(/* v0 */ 0x0, /* v1 */ 0x1, /* v2 */ 0x2, /* flag */ 0x0),
    gsSPEndDisplayList(),
};

const Gfx bowser_2_area_1_dl_07001930[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(/* value */ G_CYC_2CYCLE),
    gsSPSetOtherMode(/* cmd */ G_SETOTHERMODE_L, /* shift */ 0x3, /* len */ 0x1D, /* val */ 0xC8112078),
    gsDPSetDepthSource(/* value */ G_ZS_PIXEL),
    gsDPSetFogColor(/* r */ 0xC8, /* g */ 0x32, /* b */ 0x0, /* a */ 0xFF),
    gsSPFogFactor(/* mul */ 0xC80, /* off */ 0xF480),
    gsSPSetGeometryMode(/* flags */ G_FOG),
    gsDPSetCombineMode(/* cycle1 */ G_CC_MODULATEI, /* cycle2 */ G_CC_PASS2),
    gsSPClearGeometryMode(/* flags */ G_LIGHTING),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x0, /* tmem */ 0x0, /* tile */ G_TX_LOADTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x0, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x0, /* shifts */ 0x0),
    gsSPTexture(/* s */ 0xFFFF, /* t */ 0xFFFF, /* level */ 0x0, /* tile */ G_TX_RENDERTILE, /* on */ G_ON),
    gsDPTileSync(),
    gsDPSetTile(/* fmt */ G_IM_FMT_RGBA, /* siz */ G_IM_SIZ_16b, /* line */ 0x8, /* tmem */ 0x0, /* tile */ G_TX_RENDERTILE, /* palette */ 0x0, /* cmt */ G_TX_WRAP, /* maskt */ 0x5, /* shiftt */ 0x0, /* cms */ G_TX_WRAP, /* masks */ 0x5, /* shifts */ 0x0),
    gsDPSetTileSize(/* tile */ G_TX_RENDERTILE, /* uls */ 0x0, /* ult */ 0x0, /* lrs */ 0x7C, /* lrt */ 0x7C),
    gsSPDisplayList(/* dl */ bowser_2_area_1_dl_070016A0),
};

ALIGNED8 Texture bowser_2_area_1_texture_07000000_0115C4E7_seg7 = {
#include "bowser_2/areas/1/bowser_2_area_1_texture_07000000_0115C4E7_seg7.inc.c"
};

