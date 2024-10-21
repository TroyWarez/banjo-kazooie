#include <libultra.h>
#include "core1/core1.h"
#include "functions.h"
#include "variables.h"

typedef struct{
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
}Struct_Core2_9B650_1s;

typedef struct{
    s16 map_id;
    s16 unk2;
    s16 sns_id;
}Struct_Core2_9B650_0s;

/* .data */
Struct_Core2_9B650_1s D_8036DE80[0x84] = {
    {MAP_1_SM_SPIRAL_MOUNTAIN,      COMUSIC_10_SM,  COMUSIC_56_SM_HANGBRIDGE, 0},
    {MAP_2_MM_MUMBOS_MOUNTAIN,      COMUSIC_2_MM, -1, 1},
    {MAP_5_TTC_BLUBBERS_SHIP,       COMUSIC_5_TTC_VACATION_VERSION, -1, 1},
    {MAP_6_TTC_NIPPERS_SHELL,       COMUSIC_13_INSIDE_SANDCASTLE, -1, 0},
    {MAP_7_TTC_TREASURE_TROVE_COVE, COMUSIC_5_TTC_VACATION_VERSION, COMUSIC_11_SEAGULLS, 1},
    {MAP_8F_TTC_SHARKFOOD_ISLAND,   COMUSIC_84_TTC_SNS, -1, 1},
    {MAP_A_TTC_SANDCASTLE,          COMUSIC_28_SOMETHING_AQUATIC, -1, 0},
    {MAP_B_CC_CLANKERS_CAVERN,      COMUSIC_1C_CC_ALTERNATIVE, COMUSIC_7_CC_MUTANT_CRABS, 0},
    {MAP_C_MM_TICKERS_TOWER,        COMUSIC_1B_MYSTERIOUS_INDOORS, -1, 0},
    {MAP_D_BGS_BUBBLEGLOOP_SWAMP,   COMUSIC_6_BGS, -1, 0},
    {MAP_E_MM_MUMBOS_SKULL,         COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_10_BGS_MR_VILE,            COMUSIC_47_BGS_INSIDE_TANKTUP, -1, 0},
    {MAP_11_BGS_TIPTUP,             COMUSIC_47_BGS_INSIDE_TANKTUP, -1, 0},
    {MAP_12_GV_GOBIS_VALLEY,        COMUSIC_20_GV_ALTERNATIVE, -1, 0},
    {MAP_92_GV_SNS_CHAMBER,         COMUSIC_83_GV_SNS, -1, 0},
    {MAP_13_GV_MEMORY_GAME,         COMUSIC_24_GV_INSIDE_PYRAMID, -1, 0},
    {MAP_14_GV_SANDYBUTTS_MAZE,     COMUSIC_24_GV_INSIDE_PYRAMID, -1, 0},
    {MAP_15_GV_WATER_PYRAMID,       COMUSIC_24_GV_INSIDE_PYRAMID, -1, 0},
    {MAP_16_GV_RUBEES_CHAMBER,      COMUSIC_24_GV_INSIDE_PYRAMID, -1, 0},
    {MAP_1A_GV_INSIDE_JINXY,        COMUSIC_24_GV_INSIDE_PYRAMID, -1, 0},
    {MAP_1B_MMM_MAD_MONSTER_MANSION, COMUSIC_F_MMM_ALTERNATIVE, COMUSIC_22_MMM, 1},
    {MAP_1C_MMM_CHURCH,             COMUSIC_23_MMM_INSIDE_CHURCH, -1, 0},
    {MAP_1D_MMM_CELLAR,             COMUSIC_21_MMM_INSIDE_MMM_MANSION, COMUSIC_86_MMM_SNS, 0},
    {MAP_1E_CS_START_NINTENDO,      COMUSIC_E_MMM_BACKGROUND_WIND, -1, 1},
    {MAP_1F_CS_START_RAREWARE,      COMUSIC_E_MMM_BACKGROUND_WIND, -1, 1},
    {MAP_20_CS_END_NOT_100,         COMUSIC_AA_BEACH, -1, 1},
    {MAP_21_CC_WITCH_SWITCH_ROOM,   COMUSIC_1F_CC_INSIDE_CLANKER, -1, 1},
    {MAP_22_CC_INSIDE_CLANKER,      COMUSIC_1F_CC_INSIDE_CLANKER, -1, 1},
    {MAP_23_CC_GOLDFEATHER_ROOM,    COMUSIC_1F_CC_INSIDE_CLANKER, -1, 1},
    {MAP_24_MMM_TUMBLARS_SHED,      COMUSIC_6A_MMM_TUMBLARS_SHED, -1, 0},
    {MAP_25_MMM_WELL,               COMUSIC_F_MMM_ALTERNATIVE, -1, 1},
    {MAP_26_MMM_NAPPERS_ROOM,       COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_27_FP_FREEZEEZY_PEAK,      COMUSIC_3_FP_TWINKLIES_TALKING, -1, 0},
    {MAP_7F_FP_WOZZAS_CAVE,         COMUSIC_6B_FP_ALTERNATIVE, COMUSIC_85_FP_SNS, 0},
    {MAP_28_MMM_EGG_ROOM,           COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_29_MMM_NOTE_ROOM,          COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_2A_MMM_FEATHER_ROOM,       COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_2B_MMM_SECRET_CHURCH_ROOM, COMUSIC_23_MMM_INSIDE_CHURCH, -1, 0},
    {MAP_2C_MMM_BATHROOM,           COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_2D_MMM_BEDROOM,            COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_2E_MMM_HONEYCOMB_ROOM,     COMUSIC_21_MMM_INSIDE_MMM_MANSION, -1, 0},
    {MAP_2F_MMM_WATERDRAIN_BARREL,  COMUSIC_F_MMM_ALTERNATIVE, -1, 1},
    {MAP_30_MMM_MUMBOS_SKULL,       COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_31_RBB_RUSTY_BUCKET_BAY,   COMUSIC_33_RBB_ALTERNATIVE, -1, 1},
    {MAP_8B_RBB_ANCHOR_ROOM,        COMUSIC_33_RBB_ALTERNATIVE, -1, 1},
    {MAP_34_RBB_ENGINE_ROOM,        COMUSIC_35_RBB_MASCHINE_ROOM_AQUATIC, -1, 1},
    {MAP_35_RBB_WAREHOUSE,          COMUSIC_4A_RBB_INSIDE_CONTAINER, -1, 1},
    {MAP_36_RBB_BOATHOUSE,          COMUSIC_4A_RBB_INSIDE_CONTAINER, -1, 1},
    {MAP_37_RBB_CONTAINER_1,        COMUSIC_4A_RBB_INSIDE_CONTAINER, -1, 1},
    {MAP_38_RBB_CONTAINER_3,        COMUSIC_4A_RBB_INSIDE_CONTAINER, -1, 1},
    {MAP_39_RBB_CREW_CABIN,         COMUSIC_4C_RBB_CREWMATE_CABIN, -1, 1},
    {MAP_3A_RBB_BOSS_BOOM_BOX,      COMUSIC_4C_RBB_CREWMATE_CABIN, -1, 1},
    {MAP_3B_RBB_STORAGE_ROOM,       COMUSIC_4C_RBB_CREWMATE_CABIN, -1, 1},
    {MAP_3C_RBB_KITCHEN,            COMUSIC_4C_RBB_CREWMATE_CABIN, -1, 1},
    {MAP_3D_RBB_NAVIGATION_ROOM,    COMUSIC_4C_RBB_CREWMATE_CABIN, -1, 1},
    {MAP_3E_RBB_CONTAINER_2,        COMUSIC_4A_RBB_INSIDE_CONTAINER, -1, 1},
    {MAP_3F_RBB_CAPTAINS_CABIN,     COMUSIC_4C_RBB_CREWMATE_CABIN, -1, 1},
    {MAP_40_CCW_HUB,                COMUSIC_2F_CCW_HUBROOM, -1, 0},
    {MAP_41_FP_BOGGYS_IGLOO,        COMUSIC_5A_FP_IGLOO_SAD, COMUSIC_5B_FP_IGLOO_HAPPY, 0},
    {MAP_43_CCW_SPRING,             COMUSIC_5F_CCW_ALTERNATIVE_B, -1, 0},
    {MAP_44_CCW_SUMMER,             COMUSIC_29_CCW_SUMMER, -1, 0},
    {MAP_45_CCW_AUTUMN,             COMUSIC_2E_CCW_FALL_AQUATIC, COMUSIC_6D_CCW_GNAWTYS_HOUSE, 0},
    {MAP_46_CCW_WINTER,             COMUSIC_2A_CCW_WINTER, COMUSIC_6D_CCW_GNAWTYS_HOUSE, 0},
    {MAP_47_BGS_MUMBOS_SKULL,        COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_48_FP_MUMBOS_SKULL,         COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_4A_CCW_SPRING_MUMBOS_SKULL, COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_4B_CCW_SUMMER_MUMBOS_SKULL, COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_4C_CCW_AUTUMN_MUMBOS_SKULL, COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_4D_CCW_WINTER_MUMBOS_SKULL, COMUSIC_41_MUMBOS_HUT, -1, 0},
    {MAP_53_FP_CHRISTMAS_TREE,      COMUSIC_66_FP_INSIDE_WOZZAS_CAVE, -1, 0},
    {MAP_5A_CCW_SUMMER_ZUBBA_HIVE,  COMUSIC_45_CCW_NABNUT_ATTIC_A, -1, 0},
    {MAP_5B_CCW_SPRING_ZUBBA_HIVE,  COMUSIC_45_CCW_NABNUT_ATTIC_A, -1, 0},
    {MAP_5C_CCW_AUTUMN_ZUBBA_HIVE,  COMUSIC_45_CCW_NABNUT_ATTIC_A, -1, 0},
    {MAP_5E_CCW_SPRING_NABNUTS_HOUSE, COMUSIC_44_CCW_NABNUT, -1, 0},
    {MAP_5F_CCW_SUMMER_NABNUTS_HOUSE, COMUSIC_44_CCW_NABNUT, -1, 0},
    {MAP_60_CCW_AUTUMN_NABNUTS_HOUSE, COMUSIC_44_CCW_NABNUT, -1, 0},
    {MAP_61_CCW_WINTER_NABNUTS_HOUSE, COMUSIC_44_CCW_NABNUT, -1, 0},
    {MAP_62_CCW_WINTER_HONEYCOMB_ROOM, COMUSIC_60_NABNUT_ATTIC_B, -1, 0},
    {MAP_63_CCW_AUTUMN_NABNUTS_WATER_SUPPLY, COMUSIC_44_CCW_NABNUT, -1, 0},
    {MAP_64_CCW_WINTER_NABNUTS_WATER_SUPPLY, COMUSIC_44_CCW_NABNUT, -1, 0},
    {MAP_65_CCW_SPRING_WHIPCRACK_ROOM, COMUSIC_46_CCW_SPRING, -1, 0},
    {MAP_66_CCW_SUMMER_WHIPCRACK_ROOM, COMUSIC_46_CCW_SPRING, -1, 0},
    {MAP_67_CCW_AUTUMN_WHIPCRACK_ROOM, COMUSIC_46_CCW_SPRING, -1, 0},
    {MAP_68_CCW_WINTER_WHIPCRACK_ROOM, COMUSIC_46_CCW_SPRING, -1, 0},
    {MAP_69_GL_MM_LOBBY,            COMUSIC_1E_GL_MM_VERSION, -1, 0},
    {MAP_6A_GL_TTC_AND_CC_PUZZLE,   COMUSIC_50_GL_TTC_VERSION, -1, 0},
    {MAP_6B_GL_180_NOTE_DOOR,       COMUSIC_51_GL_CCW_VERSION, -1, 1},
    {MAP_6C_GL_RED_CAULDRON_ROOM,   COMUSIC_51_GL_CCW_VERSION, -1, 1},
    {MAP_6D_GL_TTC_LOBBY,           COMUSIC_51_GL_CCW_VERSION, -1, 1},
    {MAP_70_GL_CC_LOBBY,            COMUSIC_52_GL_BGS_RBB_VERSION, -1, 0},
    {MAP_71_GL_STATUE_ROOM,         COMUSIC_53_GL_FP_VERSION_A, -1, 1},
    {MAP_72_GL_BGS_LOBBY,           COMUSIC_53_GL_FP_VERSION_A, -1, 1},
    {MAP_6E_GL_GV_LOBBY,            COMUSIC_54_GL_GV_VERSION, -1, 0},
    {MAP_6F_GL_FP_LOBBY,            COMUSIC_59_GL_FP_VERSION_B, -1, 1},
    {MAP_74_GL_GV_PUZZLE,           COMUSIC_5D_GL_MMM_VERSION, -1, 1},
    {MAP_75_GL_MMM_LOBBY,           COMUSIC_5D_GL_MMM_VERSION, -1, 1},
    {MAP_7A_GL_CRYPT,               COMUSIC_5D_GL_MMM_VERSION, -1, 1},
    {MAP_76_GL_640_NOTE_DOOR,       COMUSIC_5E_GL_MMM_RBB_VERSION, -1, 1},
    {MAP_77_GL_RBB_LOBBY,           COMUSIC_5E_GL_MMM_RBB_VERSION, -1, 1},
    {MAP_78_GL_RBB_AND_MMM_PUZZLE,  COMUSIC_5E_GL_MMM_RBB_VERSION, -1, 1},
    {MAP_79_GL_CCW_LOBBY,           COMUSIC_63_GL_FF_VERSION, -1, 1},
    {MAP_80_GL_FF_ENTRANCE,         COMUSIC_63_GL_FF_VERSION, -1, 1},
    {MAP_93_GL_DINGPOT,             COMUSIC_74_GL_FINAL_SECTION, -1, 0},
    {MAP_90_GL_BATTLEMENTS,         COMUSIC_1_FINAL_BATTLE, -1, 1},
    {MAP_7B_CS_INTRO_GL_DINGPOT_1,  COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_7C_CS_INTRO_BANJOS_HOUSE_1, COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_7D_CS_SPIRAL_MOUNTAIN_1,   COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_7E_CS_SPIRAL_MOUNTAIN_2,   COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_81_CS_INTRO_GL_DINGPOT_2,  COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_82_CS_ENTERING_GL_MACHINE_ROOM, COMUSIC_80_GAME_OVER_CUTSCENE, -1, 1},
    {MAP_83_CS_GAME_OVER_MACHINE_ROOM, COMUSIC_80_GAME_OVER_CUTSCENE, -1, 1},
    {MAP_84_CS_UNUSED_MACHINE_ROOM, COMUSIC_80_GAME_OVER_CUTSCENE, -1, 1},
    {MAP_85_CS_SPIRAL_MOUNTAIN_3,   COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_86_CS_SPIRAL_MOUNTAIN_4,   COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_87_CS_SPIRAL_MOUNTAIN_5,   COMUSIC_91_GRUNTY_FALLING, -1, 1},
    {MAP_88_CS_SPIRAL_MOUNTAIN_6,   COMUSIC_91_GRUNTY_FALLING, -1, 1},
    {MAP_94_CS_INTRO_SPIRAL_7,      -1, -1, 1},
    {MAP_95_CS_END_ALL_100,         COMUSIC_AA_BEACH, -1, 1},
    {MAP_89_CS_INTRO_BANJOS_HOUSE_2, COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_8A_CS_INTRO_BANJOS_HOUSE_3, COMUSIC_6C_INTRO_TOWER_SCENE, -1, 1},
    {MAP_8C_SM_BANJOS_HOUSE,        COMUSIC_6E_GAME_SELECT, -1, 0},
    {MAP_91_FILE_SELECT,            COMUSIC_6E_GAME_SELECT, -1, 0},
    {MAP_8D_MMM_INSIDE_LOGGO,       COMUSIC_70_MMM_INSIDE_LOGGO, -1, 0},
    {MAP_8E_GL_FURNACE_FUN,         COMUSIC_71_FF, -1, 0},
    {MAP_96_CS_END_BEACH_1,         COMUSIC_AA_BEACH, -1, 1},
    {MAP_97_CS_END_BEACH_2,         COMUSIC_AA_BEACH, -1, 1},
    {MAP_98_CS_END_SPIRAL_MOUNTAIN_1, COMUSIC_A8_KLUNGO_BY_FALLEN_GRUNTY, -1, 1},
    {MAP_99_CS_END_SPIRAL_MOUNTAIN_2, COMUSIC_A8_KLUNGO_BY_FALLEN_GRUNTY, -1, 1},
    {-1, COMUSIC_87_MMM_SNS_HAPPIER, -1, 0},
    {-2, COMUSIC_84_TTC_SNS, -1, 0},
    {-3, COMUSIC_86_MMM_SNS, -1, 0},
    {0, 0, 0, 0}
};

s16 D_8036E2A0[9] =
{
    MAP_61_CCW_WINTER_NABNUTS_HOUSE, -1, SNS_ITEM_EGG_YELLOW,
    MAP_3F_RBB_CAPTAINS_CABIN, -2, SNS_ITEM_EGG_RED,
    MAP_2C_MMM_BATHROOM, -3, SNS_ITEM_EGG_GREEN
};

/* .bss */
struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} D_80383340;
int D_80383348;

/* .code */
s32 func_803225E0(enum map_e map_id){
    u32 i;
    s32 pad;

    pad = map_id;
    for(i = 0; D_8036E2A0[i] != 0 && D_8036E2A0[i] != pad; i+=3){}
    
    if( D_8036E2A0[i] != 0 && sns_get_item_state(D_8036E2A0[i + 2], 1)){
        pad = D_8036E2A0[i + 1];
    }

    for(i = 0; D_8036DE80[i].unk0 != 0; i++){
        if( D_8036DE80[i].unk0 == pad)
            return i;
    }

    return 0;
}

s32 func_803226BC(enum map_e map_id){
    return D_8036DE80[func_803225E0(map_id)].unk6;
}

s32 func_803226E8(enum map_e map_id){
    return D_8036DE80[func_803225E0(map_id)].unk2;
}

s32 func_80322714(enum map_e map_id){
    return D_8036DE80[func_803225E0(map_id)].unk4;
}

s32 func_80322740(void){
    return D_80383340.unk4;
}

s32 func_8032274C(void){
    return D_80383340.unk0;
}

s32 func_80322758(void){
    return D_80383340.unk2;
}

void func_80322764(void){
    D_80383348 = FALSE;
     D_80383340.unk0 = D_80383340.unk2 = D_80383340.unk4 = 0;
}

void func_8032278C(s32 arg0, s32 arg1) {
    s32 temp_v0;
    static s32 D_8036E2B4 = 1;


    D_80383340.unk4 = func_803226BC(map_get());
    D_80383340.unk0 = func_803226E8(map_get());
    D_80383340.unk2 = func_80322714(map_get());
    if (arg1 == 3) {
        D_8036E2B4 = 1;
        return;
    }
    temp_v0 = func_80322740();
    if ((arg1 == 2) && ((D_8036E2B4 != 0) || (arg0 != 1))) {
        D_8036E2B4 = 0;
        if (D_80383348 == 0) {
            if ((temp_v0 & 1) != 0) {
                core1_ce60_func_8024ADF0(FALSE);
            } else {
                core1_ce60_func_8024ADF0(TRUE);
            }
        } else {
            D_80383348 = 0;
            core1_ce60_incOrDecCounter(TRUE);
        }
    }
    if ((arg0 == 1) && (arg1 == 2)) {
        func_8025A430(-1, 0xFA0, 8);
    }
    if ((arg1 == 1) && (arg0 == 2)) {
        func_8025A430(0, 0xFA0, 8);
    }
}


void func_803228D8(void){
    if(!D_80383348){
        core1_ce60_incOrDecCounter(FALSE);
        D_80383348 = TRUE;
    }
}

int func_80322914(void){
    return D_80383348;
}
