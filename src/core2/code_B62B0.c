#include <libultra.h>
#include "functions.h"
#include "variables.h"

//Struct5Cs = u16 packed bitwise as (aaaa bbcc cdde eeff)

typedef struct{
    u16 unk0;
    u16 unk2;     //Struct5Cs
    u16 unk4[11]; //Struct5Cs
} Struct_core2_B62B0_0;

typedef struct{
    s32 (*unk0)(ActorMarker *, ActorMarker *);
    s32 unk4;
} Struct_core2_B62B0_1;

/* .data */
Struct_core2_B62B0_0 D_80370AC0[0xBB] = {
    {MARKER_12A_TOPPER_THE_CARROT_A,        0x0000, {0x0904, 0x8504, 0x8504, 0x0000, 0x8504, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7484}},
    {MARKER_129_BAWL_THE_ONION_A,          0x0000, {0x0504, 0x0984, 0x8504, 0x0000, 0x8504, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7484}},
    {MARKER_128_COLLYWOBBLE_THE_CAULIFLOWER_A,   0x0000, {0x0000, 0x0000, 0x8404, 0x0984, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7404}},
    {MARKER_135_QUARRIE,         0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {MARKER_1E6_TOPPER_THE_CARROT_B,        0x0001, {0x0904, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0000, 0x0984, 0x0A04, 0x0000, 0x1020}},
    {MARKER_1E7_BAWL_THE_ONION_B,          0x0001, {0x0904, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0000, 0x0984, 0x0A04, 0x0000, 0x1020}},
    {MARKER_1E8_COLLYWOBBLE_THE_CAULIFLOWER_B,   0x0001, {0x0904, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0000, 0x0984, 0x0A04, 0x0000, 0x1020}},
    {MARKER_1EA_GRUNTLING_RED,   0x0001, {0x0A08, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0984, 0x0A04, 0x0984, 0x2020}},
    {MARKER_295_GRUNTLING_BLUE,  0x0001, {0x0A0C, 0x8988, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0988, 0x0A04, 0x0000, 0x2020}},
    {MARKER_1F1_GRUNTLING_BLACK, 0x0001, {0x0A10, 0x898C, 0x8100, 0x8988, 0x8A08, 0x8A08, 0x0A84, 0x098C, 0x0A04, 0x0000, 0x2020}},
    {0x1E0,                      0x0000, {0x7000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0004, 0x8000, 0x0000, 0x7000}},
    {0x005,                      0x0001, {0x0904, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0984, 0x0A04, 0x0000, 0x1020}},
    {0x004,                      0x0001, {0x0A88, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0988, 0x0A04, 0x0000, 0x1020}},
    {0x003,                      0x0000, {0x0914, 0x990C, 0x2020, 0x8908, 0x8908, 0x8908, 0x0A04, 0x0914, 0x0904, 0x0000, 0x4020}},
    {0x29E,                      0x0000, {0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0xA000, 0x0004, 0x8000, 0x0000, 0x8000}},
    {MARKER_7_CONGA,             0x0000, {0x0000, 0x0000, 0x3020, 0x9000, 0x0000, 0x0000, 0x0000, 0x0804, 0x9000, 0x0000, 0x3020}},
    {MARKER_13_SNIPPET,          0x0002, {0x0504, 0x7584, 0x8100, 0x7584, 0x7604, 0x0A04, 0x0A84, 0x0504, 0x0A04, 0x0000, 0x1020}},
    {0x16B,                      0x0001, {0x0904, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0904, 0x0A04, 0x0000, 0x1020}},
    {MARKER_DD_BLACK_SNIPPET,    0x0002, {0x060C, 0x7588, 0x8100, 0x7588, 0x7608, 0x8604, 0x0A84, 0x050C, 0x0A04, 0x0000, 0x1020}},
    {0x0DE,                      0x0001, {0x0908, 0x0988, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x090C, 0x0A04, 0x0000, 0x1020}},
    {0x015,                      0x0001, {0x0A88, 0x7988, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0988, 0x0A04, 0x0000, 0x1424}},
    {0x065,                      0x0804, {0x5040, 0x5040, 0x5040, 0x5040, 0x5040, 0x5040, 0x5040, 0x090E, 0x0804, 0x0000, 0x5844}},
    {0x014,                      0x0003, {0x3020, 0x3020, 0x3020, 0x9080, 0x9080, 0x9080, 0x0A84, 0x0914, 0x0904, 0x0000, 0x3020}},
    {MARKER_A5_NIPPER,           0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x5020}},
    {0x16C,                      0x0000, {0x0000, 0x0000, 0x0000, 0xB804, 0x0000, 0x0000, 0x0000, 0x0404, 0xB804, 0x0000, 0x5020}},
    {MARKER_A4_LOCKUP_SLOW,      0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2020}},
    {MARKER_F6_LOCKUP_MEDIUM,    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2020}},
    {MARKER_F7_LOCKUP_FAST,      0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2020}},
    {0x0029,                     0x0001, {0x0804, 0x0804, 0x2020, 0x0804, 0x0804, 0x0804, 0x0804, 0x0808, 0x0804, 0x0000, 0x3444}},
    {0x01CF,                     0x0001, {0x0804, 0x0804, 0x1020, 0x0804, 0x0804, 0x0804, 0x0804, 0x0808, 0x0804, 0x0000, 0x1424}},
    {0x01A6,                     0x0000, {0x3020, 0x3020, 0x3020, 0x3020, 0x3020, 0x3020, 0x3020, 0x0000, 0x0000, 0x3020, 0x3020}},
    {MARKER_1A7_CLANKER_WHIPCRACK, 0x0804, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3020}},
    {MARKER_69_CHUMP_FISH,       0x0001, {0x2020, 0x2020, 0x2020, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0988, 0x0A04, 0x0000, 0x2020}},
    {MARKER_173_CHUMP_FISH_2,    0x0001, {0x2020, 0x2020, 0x2020, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0988, 0x0A04, 0x0000, 0x4020}},
    {MARKER_C1_FLIBBIT_RED,      0x0000, {0x0A09, 0x0985, 0x8100, 0x0985, 0x0A05, 0x0A05, 0x0000, 0x0989, 0x0A05, 0x0986, 0x2020}},
    {MARKER_C5_FLIBBIT_YELLOW,   0x0000, {0x0A0D, 0x8989, 0x8100, 0x8989, 0x7A09, 0x7A09, 0x0000, 0x098D, 0x0A05, 0x0986, 0x2020}},
    {MARKER_C2_BUZZBOMB,         0x0000, {0x0805, 0x0805, 0x8000, 0x0805, 0x0805, 0x0805, 0x0000, 0x0805, 0x0805, 0x0806, 0x3020}},
    {MARKER_B1_SIR_SLUSH,        0x0000, {0x7000, 0x8000, 0x8000, 0x8000, 0x9000, 0x9000, 0x9000, 0x0004, 0x8000, 0x0000, 0x7000}},
    {0x0287,                     0x0001, {0x7000, 0x8000, 0x8000, 0x8000, 0x9000, 0x9000, 0x8804, 0x0004, 0x8000, 0x0000, 0x7000}},
    {MARKER_205_TWINKLY_MUNCHER, 0x0000, {0x0000, 0x0000, 0x0000, 0x0404, 0x0404, 0x0404, 0x0000, 0x0408, 0x0404, 0x0000, 0x0000}},
    {MARKER_245_XMAS_TREE_EGG_TOLL, 0x0000, {0x3004, 0x3004, 0x3004, 0x3004, 0x3004, 0x2004, 0x3004, 0x0000, 0x0000, 0x3004, 0x3004}},
    {MARKER_250_ICECUBE_A,       0x0000, {0x0A90, 0x8988, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0910, 0x0A04, 0x0984, 0x3104}},
    {MARKER_25F_ICECUBE_B,       0x0001, {0x0A88, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0908, 0x0A04, 0x0984, 0x3104}},
    {0x00AD,                     0x0001, {0x0A10, 0x998C, 0x0020, 0x9988, 0x8A08, 0x0A04, 0x0A84, 0x0914, 0x0A04, 0x0000, 0x5124}},
    {MARKER_253_SCARAB_BEETLE,   0x0001, {0x0904, 0x0984, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0984, 0x0A04, 0x0000, 0x3020}},
    {MARKER_219_MUMMUM,          0x0001, {0x0588, 0x7584, 0x8100, 0x7584, 0x7604, 0x7604, 0x0684, 0x0588, 0x0A04, 0x0000, 0x2020}},
    {MARKER_298_MUMMUM_BALL,     0x0000, {0x7000, 0x8000, 0x7000, 0x8000, 0x9000, 0x9000, 0xB000, 0x0004, 0x0A04, 0x0000, 0x2020}},
    {MARKER_218_LIMBO,           0x0001, {0x0588, 0x7584, 0x8100, 0x7584, 0x7604, 0x7604, 0x0684, 0x050C, 0x0A04, 0x0000, 0x2020}},
    {MARKER_99_TEEHEE,           0x0001, {0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x0000, 0x0000, 0x0804, 0x0000, 0x2424}},
    {MARKER_296_TEEHEE_PURPLE,   0x0000, {0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x0000, 0x0000, 0x0804, 0x0000, 0x2424}},
    {MARKER_96_GRAVESTONE,           0x0001, {0x0A10, 0x890C, 0x8100, 0x8908, 0x8988, 0x8988, 0x0A84, 0x0914, 0x0984, 0x0000, 0x3024}},
    {MARKER_297_GIANT_GRAVESTONE,    0x0001, {0x0A10, 0x890C, 0x8100, 0x8908, 0x8988, 0x8988, 0x0A84, 0x0914, 0x0984, 0x0000, 0x3024}},
    {MARKER_127_BAT,             0x0001, {0x0804, 0x0804, 0x8100, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0000, 0x1424}},
    {MARKER_254_PORTRAIT_CHOMPA_A, 0x0001, {0x0804, 0x0804, 0x2020, 0x0804, 0x0804, 0x0804, 0x0804, 0x080C, 0x0804, 0x0000, 0x3444}},
    {MARKER_1D1_PORTRAIT_CHOMPA_B, 0x0001, {0x0804, 0x0804, 0x1020, 0x0804, 0x0804, 0x0804, 0x0804, 0x080C, 0x0804, 0x0000, 0x1424}},
    {MARKER_21A_SEAMAN_GRUBLIN,  0x0001, {0x0A08, 0x8988, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0000, 0x0988, 0x0A04, 0x0000, 0x2020}},
    {MARKER_C9_FLOTSAM,          0x0001, {0x0808, 0x8808, 0x8000, 0x0804, 0x0804, 0x0804, 0x0000, 0x0808, 0x0804, 0x0000, 0x3424}},
    {MARKER_1B7_BOOM_BOX,        0x0000, {0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0000, 0x098C, 0x0404, 0x0804, 0x5000}},
    {MARKER_2E_GRIMLET,          0x0004, {0x3000, 0x3000, 0x3000, 0x3000, 0x3000, 0x3000, 0x0000, 0x0000, 0x8000, 0x3000, 0x3004}},
    {MARKER_1A1_BOSS_BOOM_BOX_LARGEST, 0x0000, {0x8020, 0x8884, 0x8020, 0x8884, 0x9884, 0x9884, 0x0804, 0x0904, 0x0884, 0x0000, 0x4020}},
    {MARKER_1A2_BOSS_BOOM_BOX_LARGE,   0x0000, {0x8020, 0x8904, 0x8020, 0x8904, 0x9904, 0x9904, 0x0804, 0x0984, 0x0904, 0x0000, 0x4020}},
    {MARKER_1A3_BOSS_BOOM_BOX_MEDIUM,  0x0000, {0x9020, 0x9984, 0x9020, 0x9984, 0x9984, 0x9984, 0x0804, 0x0A04, 0x0984, 0x0000, 0x3020}},
    {MARKER_1A4_BOSS_BOOM_BOX_SMALL,   0x0000, {0x9020, 0x9A04, 0x9020, 0x9A04, 0x9A04, 0x9A04, 0x0804, 0x0A84, 0x0A04, 0x0000, 0x3020}},
    {MARKER_185_MODEL_RUSTY_BUCKET_REAR_PROPELLER, 0x5060, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5060}},
    {MARKER_191_ENGINE_ROOM_PROPELLOR_1, 0x0000, {0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x0000, 0x8000, 0x0000, 0x2000}},
    {MARKER_192_ENGINE_ROOM_PROPELLOR_2, 0x0000, {0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x0000, 0x8000, 0x0000, 0x2000}},
    {MARKER_193_ENGINE_ROOM_PROPELLOR_3, 0x0000, {0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x0000, 0x8000, 0x0000, 0x2000}},
    {MARKER_1E2_GRUBLIN_HOOD,    0x0001, {0x0A08, 0x8988, 0x8100, 0x0984, 0x0A04, 0x0A04, 0x0A84, 0x0988, 0x0A04, 0x0000, 0x2020}},
    {MARKER_1C5_WHIPCRACK,       0x0001, {0x3020, 0x3020, 0x3020, 0x3020, 0x3020, 0x3020, 0x3020, 0x080C, 0x0804, 0x0000, 0x3020}},
    {MARKER_1F9_SNARE_BEAR,      0x0000, {0x2040, 0x2040, 0x2040, 0x2040, 0x2040, 0x2040, 0x2040, 0x0000, 0x0000, 0x0000, 0x2040}},
    {MARKER_1B2_CLUCKER_A,       0x0001, {0x0804, 0x0804, 0x2020, 0x0804, 0x0804, 0x0804, 0x0804, 0x0810, 0x0804, 0x0000, 0x3444}},
    {MARKER_1D0_CLUCKER_B,       0x0001, {0x0804, 0x0804, 0x1020, 0x0804, 0x0804, 0x0804, 0x0804, 0x0810, 0x0804, 0x0000, 0x1424}},
    {MARKER_1B4_EEYRIE_BABY,     0x8000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000}},
    {0x000E,                     0x0001, {0x3000, 0x7504, 0x7080, 0x7504, 0x7584, 0x0804, 0x0804, 0x0488, 0x0804, 0x0000, 0x1020}},
    {0x01AC,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_256_FIRE_FX,         0x0000, {0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x2020, 0x0000, 0x0000, 0x2020, 0x2020}},
    {MARKER_C_ORANGE_PROJECTILE, 0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2424}},
    {MARKER_DB_BURIED_TREASURE,  0x0000, {0x7000, 0x7000, 0x7000, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0000, 0x7000}},
    {MARKER_28_CLANKER_SAWBLADE, 0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x2020}},
    {MARKER_4A_CC_KEY,           0x0404, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404}},
    {MARKER_6E_PINK_EGG_LARGEST, 0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_D7_PINK_EGG_MEDIUM,  0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_D9_PINK_EGG_SMALLEST, 0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_D6_PINK_EGG_LARGE,   0x0000, {0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_D8_PINK_EGG_SMALL,   0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x006D,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x019B,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x019C,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x019D,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x019E,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x019F,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x01A0,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_B9_FP_SNOWMAN_BUTTON,0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000}},
    {MARKER_124_BOGGY_1,         0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0097,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004, 0x0000, 0x0000, 0x0000}},
    {0x0125,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404}},
    {0x0126,                     0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404}},
    {MARKER_1FD_BLUE_PRESENT_COLLECTIBLE,  0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004}},
    {MARKER_1FE_GREEN_PRESENT_COLLECTIBLE, 0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004}},
    {MARKER_1FF_RED_PRESENT_COLLECTIBLE,   0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004}},
    {MARKER_20B_WOZZA,          0x7000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004, 0x0000, 0x0000, 0x7000}},
    {MARKER_20F_WOZZA_IN_CAVE,  0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004, 0x0000, 0x0000, 0x0000}},
    {0x0204,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0207,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0404}},
    {0x0206,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000}},
    {MARKER_BC_GOBI_1,          0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004}},
    {0x00BE,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0804, 0x080C, 0x0804, 0x0000, 0x0000}},
    {MARKER_BF_GOBI_2,          0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004}},
    {MARKER_C3_GOBI_3,          0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004}},
    {MARKER_252_LOGGO,          0x0000, {0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0004, 0x0000, 0x0004, 0x0004, 0x0004}},
    {MARKER_48_NAPPER,          0x0004, {0x7000, 0x8000, 0x8000, 0x8000, 0x9000, 0x9000, 0xB000, 0x0000, 0x8000, 0x0000, 0x8004}},
    {0x0132,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0130,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x012E,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x012C,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x01BF,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x7404, 0x7404, 0x0000, 0x0414, 0x7404, 0x0000, 0x0000}},
    {0x01B3,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x9804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x01B0,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0814, 0x0000, 0x0000, 0x0000}},
    {MARKER_1AE_ZUBBA,          0x0000, {0x3004, 0x3004, 0x3004, 0x0804, 0x0804, 0x0804, 0x0804, 0x080C, 0x0804, 0x0000, 0x3004}},
    {0x0050,                    0x0003, {0x0804, 0x0804, 0x0000, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0804, 0x0000}},
    {0x009A,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x009E,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0804, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x009D,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x00E7,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x009C,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {MARKER_EA_LIGHTHOUSE_DOOR, 0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x022D,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x022E,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0235,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0804, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0163,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0239,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0804, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0236,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0804, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0237,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0804, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0238,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0804, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0263,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x017D,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x009F,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x00A0,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x00FF,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x0107,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x0108,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0109,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x080C, 0x0804, 0x0000, 0x0000}},
    {0x0118,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x0119,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x011A,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x0000, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x011E,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x8804, 0x8804, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x011F,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x7804, 0x7804, 0x0000, 0x0808, 0x0804, 0x0000, 0x0000}},
    {0x0121,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x8804, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0123,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x01F2,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x01F3,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0804, 0x0804, 0x0000, 0x0000}},
    {0x0224,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0xA000, 0x080C, 0x0000, 0x0000, 0x0000}},
    {0x0225,                    0x0000, {0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0xA000, 0x080C, 0x8000, 0x0000, 0x0000}},
    {0x00A2,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x8804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x01A9,                    0x0000, {0x0000, 0x0000, 0x0000, 0x7804, 0x0000, 0x0804, 0x0000, 0x080C, 0x0000, 0x0000, 0x0000}},
    {0x0195,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0196,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0197,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x002F,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0194,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0186,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0183,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0184,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0164,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x0165,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}},
    {0x00E4,                    0x0000, {0x8004, 0x8004, 0x8004, 0x8404, 0x8404, 0x8004, 0x8004, 0x0000, 0x8004, 0x8004, 0x8004}},
    {0x00E5,                    0x0000, {0x8004, 0x8004, 0x8004, 0x8404, 0x8404, 0x8004, 0x8004, 0x0000, 0x8004, 0x8004, 0x8004}},
    {0x00E6,                    0x0000, {0x8004, 0x8004, 0x8004, 0x8404, 0x8404, 0x8004, 0x8004, 0x0000, 0x8004, 0x8004, 0x8004}},
    {0x00B2,                    0x0001, {0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000, 0x2020}},
    {0x01A5,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001}},
    {0x01A6,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3020}},
    {0x016D,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8004}},
    {0x016E,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8004}},
    {0x016F,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8004}},
    {0x0170,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7004}},
    {0x0171,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7004}},
    {0x0172,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7004}},
    {0x025C,                    0x0000, {0x3804, 0x3804, 0x3804, 0x3804, 0x3804, 0x3804, 0x3804, 0x0000, 0x0804, 0x3804, 0x3804}},
    {0x025D,                    0x0000, {0x3804, 0x3804, 0x3804, 0x3804, 0x3804, 0x3804, 0x3804, 0x0000, 0x0804, 0x3804, 0x3804}},
    {0x027A,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000}},
    {0x027F,                    0x0000, {0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0404, 0x0000, 0x0000, 0x0000}},
    {0x025E,                    0x0000, {0x4000, 0x4000, 0x4000, 0xA604, 0x4000, 0x4000, 0x4000, 0x0584, 0xA000, 0x0000, 0x4000}},
    {0x0260,                    0x0000, {0x5000, 0x5000, 0x5000, 0x5000, 0x5000, 0x5000, 0x5000, 0x0000, 0xA000, 0x0000, 0x5000}},
    {0x0281,                    0x0000, {0x4080, 0x4080, 0x4080, 0xA604, 0x4080, 0x4080, 0x4080, 0x0584, 0xA200, 0x0000, 0x4080}},
    {0x0282,                    0x0000, {0x4080, 0x4080, 0x4080, 0x4080, 0x4080, 0xA604, 0xA604, 0x0000, 0xA200, 0x0000, 0x4080}},
    {0x0283,                    0x0000, {0x4080, 0x4080, 0x4080, 0x4080, 0x4080, 0x4080, 0x4080, 0x0000, 0xA200, 0x0000, 0x4080}},
    {0x0284,                    0x0000, {0x5404, 0x5404, 0x5404, 0x5404, 0x5404, 0x5404, 0x5404, 0x0000, 0xB404, 0x5404, 0x5404}},
};

s32 func_8033D240(ActorMarker *arg0, ActorMarker *arg1);
s32 func_8033D2A8(ActorMarker *arg0, ActorMarker *arg1);

Struct_core2_B62B0_1 D_80371DC0[11] = {
    {func_8033D2A8, HITBOX_4_CLAW}, 
    {func_8033D2A8, HITBOX_7_ROLL},
    {func_8033D2A8, HITBOX_A_FAST_FALLING}, 
    {func_8033D2A8, HITBOX_5_PECK},
    {func_8033D2A8, HITBOX_2_BEAK_BARGE}, 
    {func_8033D2A8, HITBOX_1_BEAK_BUSTER},
    {func_8033D2A8, HITBOX_3_BEAK_BOMB}, 
    {func_8033D240, 1},
    {func_8033D2A8, HITBOX_6_WONDERWING}, 
    {func_8033D2A8, HITBOX_9_CROC_BITE},
    {func_8033D240, 0}
};

/* .bss */
s16 D_80383F10[0x2A9];

/* .code */
s32 func_8033D240(ActorMarker *arg0, ActorMarker *arg1){
    if(arg0){
        if(!arg0->id && player_getActiveHitbox(arg1) == HITBOX_6_WONDERWING)
            return -1;
        return arg0->id;
    }
    return -1;
}

s32 func_8033D2A8(ActorMarker *arg0, ActorMarker *arg1){
    if(!arg0)
        return HITBOX_6_WONDERWING;
    
    if(!arg0->id)
        return player_getActiveHitbox(arg1);
    return HITBOX_0_NONE;
}

void func_8033D2F4(void) {
    s32 var_a0;
    bool var_a1;
    s32 var_v1;
    s32 var_v0 = 0xBB;

    for(var_v1 = 0; var_v1 < 0x2A9; var_v1++) {
        for(((var_a0 = 0), (var_a1 = FALSE), (D_80383F10[var_v1] = -1)); (var_a0 < var_v0) && !var_a1; var_a0++){
            if (var_v1 == D_80370AC0[var_a0].unk0) {
                D_80383F10[var_v1] = var_a0;
                var_a1 = TRUE;
            }
        }
    }

    for(var_a0 = 0; var_a0 < var_v0; var_a0++) {
        for(var_v1 = 0; var_v1 < 10; var_v1++){
            D_80370AC0[var_a0].unk4[var_v1] |=  D_80370AC0[var_a0].unk2;
        }
    }
}

bool func_8033D410(ActorMarker *arg0, ActorMarker *arg1) {
    s32 var_s2;
    s32 sp38;
    s16 temp_t0;
    s32 temp_s0;

    sp38 = D_80383F10[arg1->id];
    if (sp38 == -1) {
        return FALSE;
    }
    for(var_s2 = 0; var_s2 < 11; var_s2++){
        if ((D_80370AC0[sp38].unk4[var_s2] != 0) && (D_80371DC0[var_s2].unk0(arg0, arg1) == D_80371DC0[var_s2].unk4)) {
            func_80330078(arg1, arg0, D_80370AC0[sp38].unk4 + var_s2);
            func_80330078(arg0, arg1, D_80370AC0[sp38].unk4 + var_s2);
            break;
        }
    }
    return TRUE;
}

s32 func_8033D564(struct5Cs *arg0){
    return arg0->unk0_15;
}

enum marker_collision_func_type_e func_8033D574(struct5Cs *arg0){
    return arg0->unk0_11;
}

s32 func_8033D584(struct5Cs *arg0){
    return arg0->unk0_9;
}

s32 func_8033D594(struct5Cs *arg0){
    return arg0->unk0_6;
}

s32 func_8033D5A4(struct5Cs *arg0){
    return arg0->unk0_4;
}

s32 func_8033D5B4(struct5Cs *arg0){
    return arg0->unk0_1;
}
