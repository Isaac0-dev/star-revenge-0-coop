const GeoLayout ccm_geo_0C000610[] = {
/* 16000001 00960032 */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 50),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 0E000002 8029DB48 */                                        GEO_SWITCH_CASE(2, geo_switch_anim_state),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 15040000 050127D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_050127D8),
/* 15040000 05012808 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_05012808),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0C000644[] = {
/* 16000001 00960032 */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 50),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 050130B0 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_050130B0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_05014630[] = {
/* 20001388 */                                             GEO_CULLING_RADIUS(5000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15050000 050145C0 */                                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_050145C0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0C000000[] = {
/* 16000001 009600FA */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 250),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00010000 */                                        GEO_SCALE(LAYER_FORCE, 0x00010000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 13040000 00000000 050041E8 */                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_050041E8),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 1301003E 00000000 05003F20 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 62, 0, 0, ccm_dl_05003F20),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 1301002C 00000000 05003D80 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 44, 0, 0, ccm_dl_05003D80),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 1301003A 00000000 05003BD0 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 58, 0, 0, ccm_dl_05003BD0),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFFD 00110011 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -3, 17, 17, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 05004330 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_05004330),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010044 00000000 050047C8 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, ccm_dl_050047C8),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 0E000004 8029DB48 */                                                                GEO_SWITCH_CASE(4, geo_switch_anim_state),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 0B000000 */                                                                             GEO_NODE_START(),
/* 0B000000 */                                                                             GEO_NODE_START(),
/* 04000000 */                                                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                                                 GEO_OPEN_NODE(),
/* 18000000 802A45E4 */                                                                            GEO_ASM(0, geo_offset_klepto_held_object),
/* 10810000 00000064 000000B4 010E0000 03022F48 */                                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 100, 0, 180, 270, 0, dl_03022F48),
/* 05000000 */                                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                                             GEO_CLOSE_NODE(),
/* 0B000000 */                                                                             GEO_NODE_START(),
/* 04000000 */                                                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                                                 GEO_OPEN_NODE(),
/* 18000000 802A45E4 */                                                                            GEO_ASM(0, geo_offset_klepto_held_object),
/* 10810000 00000064 000000B4 010E0000 0302B870 */                                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 100, 0, 180, 270, 0, dl_0302B870),
/* 18000000 802A45E4 */                                                                            GEO_ASM(0, geo_offset_klepto_held_object),
/* 10840000 00000064 000000B4 010E0000 0302BA18 */                                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 0, 100, 0, 180, 270, 0, dl_0302BA18),
/* 05000000 */                                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                                             GEO_CLOSE_NODE(),
/* 0B000000 */                                                                             GEO_NODE_START(),
/* 04000000 */                                                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                                                 GEO_OPEN_NODE(),
/* 18000000 802A45E4 */                                                                            GEO_ASM(0, geo_offset_klepto_held_object),
/* 10810000 00000064 000000B4 010E0000 0302C620 */                                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 100, 0, 180, 270, 0, dl_0302C620),
/* 05000000 */                                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFFD 0011FFEF 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -3, 17, -17, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 05004438 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_05004438),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010044 00000000 05004B58 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, ccm_dl_05004B58),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010031 FFF7FFEF 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 49, -9, -17, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13040000 00000000 05004D38 */                                               GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_05004D38),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13040022 00000000 05004F58 */                                                   GEO_ANIMATED_PART(LAYER_ALPHA, 34, 0, 0, ccm_dl_05004F58),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 1304004F 00000000 05005178 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 79, 0, 0, ccm_dl_05005178),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010031 FFF70011 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 49, -9, 17, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13040000 00000000 05004C28 */                                               GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_05004C28),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13040022 00000000 05004E48 */                                                   GEO_ANIMATED_PART(LAYER_ALPHA, 34, 0, 0, ccm_dl_05004E48),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 1304004F 00000000 05005068 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 79, 0, 0, ccm_dl_05005068),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 13010000 00000000 05004118 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_05004118),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0C0002AC[] = {
/* 13010000 00000000 00000000 */                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 130101BF 00000000 00000000 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 447, 0, 0, NULL),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 0500C640 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C640),
/* 13010119 0005FE5D 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 281, 5, -419, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010190 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 400, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010191 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 401, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 0500BF00 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500BF00),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C100 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C100),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C378 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C378),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 13010119 0005FF26 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 281, 5, -218, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010190 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 400, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010191 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 401, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 0500BF00 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500BF00),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C100 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C100),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C378 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C378),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 13010119 0005FFEE 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 281, 5, -18, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010190 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 400, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010191 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 401, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 0500BF00 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500BF00),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C100 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C100),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C378 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C378),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 13010119 000500B4 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 281, 5, 180, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010190 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 400, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010191 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 401, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 0500BF00 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500BF00),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C100 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C100),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C378 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C378),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 13010000 00000000 0500C908 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500C908),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 0E000004 8029DB48 */                                                GEO_SWITCH_CASE(4, geo_switch_anim_state),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 15040000 0500C9B8 */                                                    GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0500C9B8),
/* 15040000 0500CA50 */                                                    GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0500CA50),
/* 15040000 0500CAE8 */                                                    GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0500CAE8),
/* 15040000 0500CB80 */                                                    GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0500CB80),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 130100B5 00590050 00000000 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 181, 89, 80, NULL),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 130100C7 00000000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 199, 0, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 0500BC88 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500BC88),
/* 130100C8 00C700C7 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 200, 199, 199, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010150 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 336, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 13010000 00000000 0500B748 */                                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500B748),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13010000 00000000 0500B9C0 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0500B9C0),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 03000000 */                                             GEO_RETURN(),
};


const GeoLayout ccm_geo_0C0005A8[] = {
/* 1600000B 00B4012C */                                    GEO_SHADOW(SHADOW_SQUARE_SCALABLE, 180, 300),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 15010000 0500CC18 */                                            GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0500CC18),
/* 02010000 0C0002AC */                                            GEO_BRANCH(1, ccm_geo_0C0002AC),
/* 15010000 0500CC30 */                                            GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0500CC30),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0C0005E4[] = {
/* 1600000B 00B4012C */                                    GEO_SHADOW(SHADOW_SQUARE_SCALABLE, 180, 300),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 02010000 0C0002AC */                                            GEO_BRANCH(1, ccm_geo_0C0002AC),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0D0000DC[] = {
/* 16000001 00960064 */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 100),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 14000000 00000000 */                                                    GEO_BILLBOARD(),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 15040000 06006880 */                                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06006880),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 13010036 00000000 06006758 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, ccm_dl_06006758),
/* 13010036 00000000 06006A88 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, ccm_dl_06006A88),
/* 13010039 FFD00000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 57, -48, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13040000 00000000 06006BD0 */                                               GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06006BD0),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010039 FFD00000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 57, -48, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13040000 00000000 06006D00 */                                               GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06006D00),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0D000394[] = {
/* 16000001 00960064 */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 100),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 13010000 FFE30000 00000000 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -29, 0, NULL),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 1301FFFF 00710070 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 113, 112, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 130100C6 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 130100C3 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 13040000 00000000 06014378 */                                                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014378),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13040000 00000000 06014270 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014270),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13040000 00000000 06014188 */                                                   GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014188),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFFF 006DFF8C 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 109, -116, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 130100C6 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 130100C3 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 13040000 00000000 06014378 */                                                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014378),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13040000 00000000 06014270 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014270),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13040000 00000000 06014188 */                                                   GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014188),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010000 00000000 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 14000000 00000000 */                                                        GEO_BILLBOARD(),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 15040000 060139F8 */                                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060139F8),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFE3 FFC7001C 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -29, -57, 28, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 1301009E 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 158, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 14000000 00000000 */                                                                    GEO_BILLBOARD(),
/* 04000000 */                                                                             GEO_OPEN_NODE(),
/* 15040000 06013AE8 */                                                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06013AE8),
/* 05000000 */                                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13040000 00000000 06013CB8 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06013CB8),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFE3 0037001C 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 55, 28, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 1301009D 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 157, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 14000000 00000000 */                                                                    GEO_BILLBOARD(),
/* 04000000 */                                                                             GEO_OPEN_NODE(),
/* 15040000 06013BD0 */                                                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06013BD0),
/* 05000000 */                                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13040000 00000000 06013DA0 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06013DA0),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFFF FF8CFF91 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, -111, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 130100C6 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 130100C3 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 13040000 00000000 06014378 */                                                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014378),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13040000 00000000 06014270 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014270),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13040000 00000000 06014188 */                                                   GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014188),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FFFF FF8C0070 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, 112, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 130100C3 00000000 00000000 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 130100C7 00000000 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 199, 0, 0, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 13040000 00000000 06014378 */                                                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014378),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 13040000 00000000 06014270 */                                                       GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014270),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 13040000 00000000 06014188 */                                                   GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ccm_dl_06014188),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010000 00000000 060140F0 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_060140F0),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0D00001C[] = {
/* 0B000000 */                                             GEO_NODE_START(),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 0E000014 8029DB48 */                                        GEO_SWITCH_CASE(20, geo_switch_anim_state),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041F0 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041F0),
/* 15040000 06004208 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06004208),
/* 15040000 06004220 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06004220),
/* 15040000 06004208 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06004208),
/* 15040000 060041F0 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041F0),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041F0 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041F0),
/* 15040000 06004208 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06004208),
/* 15040000 06004220 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06004220),
/* 15040000 06004208 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06004208),
/* 15040000 060041F0 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041F0),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 15040000 060041D8 */                                            GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_060041D8),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0D000000[] = {
/* 16000001 009B00C8 */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 155, 200),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 06002080 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06002080),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0D000230[] = {
/* 20001388 */                                             GEO_CULLING_RADIUS(5000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 13010000 00000000 00000000 */                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 13010000 00000000 0600CFD0 */                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600CFD0),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 1301050F 00000000 0600C8B8 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 1295, 0, 0, ccm_dl_0600C8B8),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010394 00000000 0600C468 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 916, 0, 0, ccm_dl_0600C468),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 1301036A 00000000 0600BAF8 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 874, 0, 0, ccm_dl_0600BAF8),
/* 04000000 */                                                                     GEO_OPEN_NODE(),
/* 15040000 0600DFA8 */                                                                GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0600DFA8),
/* 1301001E 01BCFFFA 00000000 */                                                       GEO_ANIMATED_PART(LAYER_OPAQUE, 30, 444, -6, NULL),
/* 04000000 */                                                                         GEO_OPEN_NODE(),
/* 13010000 00000000 0600C030 */                                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600C030),
/* 05000000 */                                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FC83 FE16FFFA 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -893, -490, -6, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 0600D440 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600D440),
/* 04000000 */                                                                 GEO_OPEN_NODE(),
/* 13010514 00000000 0600D6D8 */                                                   GEO_ANIMATED_PART(LAYER_OPAQUE, 1300, 0, 0, ccm_dl_0600D6D8),
/* 05000000 */                                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FBC2 005BFD44 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -1086, 91, -700, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 0600DE38 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600DE38),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010386 02BCFCEF 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 902, 700, -785, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 0600DA88 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600DA88),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 1301FBC2 005B02BA 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, -1086, 91, 698, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 0600DC60 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600DC60),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 13010386 02BC030F 00000000 */                                           GEO_ANIMATED_PART(LAYER_OPAQUE, 902, 700, 783, NULL),
/* 04000000 */                                                             GEO_OPEN_NODE(),
/* 13010000 00000000 0600D8B0 */                                               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ccm_dl_0600D8B0),
/* 05000000 */                                                             GEO_CLOSE_NODE(),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_0D0001A0[] = {
/* 16000001 00960064 */                                    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 150, 100),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 1D000000 00004000 */                                        GEO_SCALE(LAYER_FORCE, 0x00004000),
/* 04000000 */                                                 GEO_OPEN_NODE(),
/* 18000000 8030D93C */                                            GEO_ASM(0, geo_snufit_move_mask),
/* 11000000 00000000 */                                            GEO_TRANSLATE_NODE(LAYER_FORCE, 0, 0, 0),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 15010000 06009748 */                                                GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_06009748),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 15010000 06009498 */                                            GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_06009498),
/* 15010000 06009938 */                                            GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_06009938),
/* 15010000 06009B68 */                                            GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_06009B68),
/* 14000000 00000000 */                                            GEO_BILLBOARD(),
/* 04000000 */                                                     GEO_OPEN_NODE(),
/* 18000000 8030D9AC */                                                GEO_ASM(0, geo_snufit_scale_body),
/* 1D000000 00000000 */                                                GEO_SCALE(LAYER_FORCE, 0x00000000),
/* 04000000 */                                                         GEO_OPEN_NODE(),
/* 15040000 06009A10 */                                                    GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_06009A10),
/* 05000000 */                                                         GEO_CLOSE_NODE(),
/* 05000000 */                                                     GEO_CLOSE_NODE(),
/* 05000000 */                                                 GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000660[] = {
/* 20000BB8 */                                             GEO_CULLING_RADIUS(3000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07002CC8 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07002CC8),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000678[] = {
/* 200003E8 */                                             GEO_CULLING_RADIUS(1000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 07002E80 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_07002E80),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000690[] = {
/* 20000BB8 */                                             GEO_CULLING_RADIUS(3000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07004A98 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07004A98),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120006A8[] = {
/* 20000BB8 */                                             GEO_CULLING_RADIUS(3000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07005C80 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07005C80),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120006C0[] = {
/* 20000DAC */                                             GEO_CULLING_RADIUS(3500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07007E60 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07007E60),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120006D8[] = {
/* 20000DAC */                                             GEO_CULLING_RADIUS(3500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07008258 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07008258),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120006F0[] = {
/* 20000AF0 */                                             GEO_CULLING_RADIUS(2800),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07008E20 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07008E20),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000708[] = {
/* 20000FA0 */                                             GEO_CULLING_RADIUS(4000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0700BB48 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0700BB48),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000720[] = {
/* 20000BB8 */                                             GEO_CULLING_RADIUS(3000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0700CA38 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0700CA38),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000738[] = {
/* 20000FA0 */                                             GEO_CULLING_RADIUS(4000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0700DBD8 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0700DBD8),
/* 15040000 0700DE88 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0700DE88),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000758[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 0700E178 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0700E178),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000770[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15050000 0700E830 */                                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_0700E830),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000788[] = {
/* 20000FA0 */                                             GEO_CULLING_RADIUS(4000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 07018630 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_07018630),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120007A0[] = {
/* 20000DAC */                                             GEO_CULLING_RADIUS(3500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07014340 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07014340),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120007B8[] = {
/* 20000640 */                                             GEO_CULLING_RADIUS(1600),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07014D68 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07014D68),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120007D0[] = {
/* 20000ED8 */                                             GEO_CULLING_RADIUS(3800),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 070154F0 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_070154F0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120007E8[] = {
/* 200009C4 */                                             GEO_CULLING_RADIUS(2500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15050000 07015AA0 */                                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_07015AA0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000800[] = {
/* 20001194 */                                             GEO_CULLING_RADIUS(4500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15050000 07017368 */                                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_07017368),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000818[] = {
/* 20001388 */                                             GEO_CULLING_RADIUS(5000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15050000 07018990 */                                        GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_07018990),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000830[] = {
/* 20000BB8 */                                             GEO_CULLING_RADIUS(3000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 07018FD8 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_07018FD8),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120008C0[] = {
/* 200002BC */                                             GEO_CULLING_RADIUS(700),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701AC30 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701AC30),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000848[] = {
/* 200001F4 */                                             GEO_CULLING_RADIUS(500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 18000000 802D2520 */                                        GEO_ASM(0, geo_exec_flying_carpet_create),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120008A8[] = {
/* 20000514 */                                             GEO_CULLING_RADIUS(1300),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701A9B0 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701A9B0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000878[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701A3A0 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701A3A0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120008D8[] = {
/* 200002BC */                                             GEO_CULLING_RADIUS(700),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701ADD8 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701ADD8),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000890[] = {
/* 200004B0 */                                             GEO_CULLING_RADIUS(1200),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15040000 0701A4B8 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0701A4B8),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000908[] = {
/* 200003E8 */                                             GEO_CULLING_RADIUS(1000),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701B2D8 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701B2D8),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000940[] = {
/* 2000044C */                                             GEO_CULLING_RADIUS(1100),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701BB20 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701BB20),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000860[] = {
/* 20000514 */                                             GEO_CULLING_RADIUS(1300),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07019918 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07019918),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000920[] = {
/* 200001A4 */                                             GEO_CULLING_RADIUS(420),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701B660 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701B660),
/* 15040000 0701B798 */                                        GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_0701B798),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120008F0[] = {
/* 200001F4 */                                             GEO_CULLING_RADIUS(500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701B058 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701B058),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000958[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 0701E488 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_0701E488),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000970[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07020F18 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07020F18),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_12000988[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 070239A8 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_070239A8),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120009A0[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07026448 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07026448),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};


const GeoLayout ccm_geo_120009B8[] = {
/* 200005DC */                                             GEO_CULLING_RADIUS(1500),
/* 04000000 */                                             GEO_OPEN_NODE(),
/* 15010000 07028DC0 */                                        GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_07028DC0),
/* 05000000 */                                             GEO_CLOSE_NODE(),
/* 01000000 */                                             GEO_END(),
};
