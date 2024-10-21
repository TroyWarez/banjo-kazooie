#include <libultra.h>
#include "functions.h"
#include "variables.h"


extern f32 func_8033A244(f32);

typedef struct{
    BKModelBin *unk0;
    s32 unk4;
    f32 unk8;
}struct_7AF80_0;

typedef struct{
    BKSprite *unk0;
    BKSpriteDisplayData *unk4;
    s32 unk8;
    f32 unkC;
}struct_7AF80_1;

BKModelBin *func_8030A428(s32 arg0);

/* .data */
s32 D_8036B800 = 0;

/* .bss */
struct_7AF80_0 *D_80382390; //prop models ???
struct_7AF80_1 *D_80382394; //prop_sprites ???

BKSpriteDisplayData *func_8030A4D4(s32 arg0);


void func_8030A2D0(Gfx **gfx, Mtx **mtx, Vtx **vtx, f32 arg3[3], f32 arg4[3], f32 arg5, s32 arg6, Cube* arg7){
    BKModelBin * sp2C;
    
    sp2C = func_8030A428(arg6);
    func_8033A244(3700.0f);
    func_8033A28C(1);
    modelRender_setDepthMode(MODEL_RENDER_DEPTH_FULL);
    func_8033A1FC();
    modelRender_draw(gfx, mtx, arg3, arg4, arg5, NULL, sp2C);
}

void func_8030A350(Gfx **gfx, Mtx **mtx, Vtx **Vtx, f32 arg3[3], f32 arg4, s32 arg5, Cube *arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA, s32 argB) {
    f32 sp2C[3];
    BKSpriteDisplayData *sp28;

    sp28 = func_8030A4D4(arg5);
    sp2C[0] = arg4;
    sp2C[1] = arg4;
    sp2C[2] = arg4;
    func_80338338(0xFF - (arg7 * 0x10), 0xFF - (arg8 * 0x10), 0xFF - (arg9 * 0x10));
    if (func_80344C20(sp28) & 0xB00) {
        func_803382E4(0xB);
    } else {
        func_803382E4(0xE);
    }
    func_80335D30(gfx);
    func_80344138(sp28, argB, argA, arg3, sp2C, gfx, mtx);
    func_8033687C(gfx);
}

BKModelBin *func_8030A428(s32 arg0){
    if(D_80382390[arg0].unk0 == NULL){
        D_80382390[arg0].unk0 = assetcache_get(0x2d1 + arg0);
    }
    D_80382390[arg0].unk4 = globalTimer_getTime();
    return D_80382390[arg0].unk0;
}

BKModelBin *func_8030A4B4(s32 arg0){
    return D_80382390[arg0].unk0;
}

BKSpriteDisplayData *func_8030A4D4(s32 arg0)
{
    
    if (((struct_7AF80_1 *)((s32)D_80382394 + arg0*sizeof(struct_7AF80_1)))->unk0 == 0){
        ((struct_7AF80_1 *)((s32)D_80382394 + arg0*sizeof(struct_7AF80_1)))->unk0 = func_8033B6C4(arg0 + 0x572, &((struct_7AF80_1 *)((s32)D_80382394 + arg0*sizeof(struct_7AF80_1)))->unk4);
    }
    D_80382394[arg0].unk8 = globalTimer_getTime();
    return D_80382394[arg0].unk4;
}

BKSprite *func_8030A55C(s32 arg0){
    func_8030A4D4(arg0);
    return D_80382394[arg0].unk0;
}

f32 func_8030A590(Prop *arg0){
    if(arg0->unk8_1){
        ModelProp* ModelProp = &arg0->modelProp;
        return D_80382390[arg0->spriteProp.unk0_31].unk8;
    }
    else{//L8030A65C
        SpriteProp *spriteProp = &arg0->spriteProp;
        return D_80382394[spriteProp->unk0_31].unkC;
    }
}

void func_8030A5EC(Prop *arg0, f32 arg1){
    if(arg0->unk8_1){
        ModelProp* ModelProp = &arg0->modelProp;
        D_80382390[arg0->spriteProp.unk0_31].unk8 = (f32)ModelProp->unkA*arg1/100.0f;
    }
    else{//L8030A65C
        SpriteProp *spriteProp = &arg0->spriteProp;
        D_80382394[spriteProp->unk0_31].unkC = (f32)spriteProp->unk0_9*arg1/100.0f;
    }
}

void func_8030A6B0(void){//clear
    struct_7AF80_0* iPtr;
    struct_7AF80_1* jPtr;

    for(iPtr = D_80382390; iPtr < &D_80382390[0x2A2]; iPtr++){
        if(iPtr->unk0){
            assetcache_release(iPtr->unk0);
        }
    }
    for(jPtr = D_80382394; jPtr < &D_80382394[0x168]; jPtr++){
        if(jPtr->unk0){
            func_8033B338(&jPtr->unk0, &jPtr->unk4);
        }
    }
    free(D_80382390);
    D_80382390 = NULL;
    free(D_80382394);
    D_80382394 = NULL;
}

void func_8030A78C(void){//init
    struct_7AF80_0* iPtr;
    struct_7AF80_1* jPtr;

    D_80382390 = (struct_7AF80_0 *)malloc(0x2A2 * sizeof(struct_7AF80_0));
    D_80382394 = (struct_7AF80_1 *)malloc(0x168 * sizeof(struct_7AF80_1));
    D_8036B800 = 0;
    for(iPtr = D_80382390; iPtr < &D_80382390[0x2A2]; iPtr++){
        iPtr->unk0 = NULL;
        iPtr->unk8 = 0.0f;
    }
    for(jPtr = D_80382394; jPtr < &D_80382394[0x168]; jPtr++){
        jPtr->unk0 = NULL;
        jPtr->unkC = 0.0f;
    }
}

void func_8030A850(s32 arg0) {
    static s32 D_8036B804 = 0;
    static s32 D_8036B808 = 0;
    s32 temp_s3;
    s32 var_s0;
    struct_7AF80_0 *sp3C;
    struct_7AF80_1 *temp_a0_2;

    temp_s3 = globalTimer_getTime() - func_80255B08(arg0);
    for(var_s0 = 0; (D_80382390 != NULL) && (var_s0 < ((arg0 == 1) ? 0x28 : 0x2A1)); var_s0++, D_8036B804 = (D_8036B804 >= 0x2A1)? 0: D_8036B804 + 1){
        sp3C = (struct_7AF80_0*)((u32)D_80382390 + sizeof(struct_7AF80_0)*D_8036B804);
        if ((sp3C->unk0 != 0) && ((sp3C->unk4 < temp_s3) || (arg0 == 3))){
            assetcache_release(sp3C->unk0);
            sp3C->unk0 = 0;
            if( (arg0 != 1) && (func_80254BC4(1))){
                return;
            }
        }
    }

    for(var_s0 = 0; (D_80382394 != NULL) && (var_s0 < ((arg0 == 1) ? 0x28 : 0x167)); var_s0++, D_8036B808 = (D_8036B808 >= 0x167)? 0: D_8036B808 + 1){
        temp_a0_2 = (struct_7AF80_1*)((u32)D_80382394 + sizeof(struct_7AF80_1)*D_8036B808);
        if ((temp_a0_2->unk0 != 0) && ((temp_a0_2->unk8 < temp_s3) || (arg0 == 3))){
            func_8033B338(&temp_a0_2->unk0, &temp_a0_2->unk4);
            if( (arg0 != 1) && (func_80254BC4(1))){
                return;
            }
        }
    }
}

void func_8030AA6C(void) {
    BKModelBin *temp_a0;
    s32 phi_s2;

    D_80382394 = (struct_7AF80_1 *) defrag(D_80382394);
    D_80382390 = (struct_7AF80_0 *) defrag(D_80382390);
    if (!func_802559A0() && !func_80255AE4() && D_80382390 != NULL) {
        for(phi_s2 = 0x14; (phi_s2 != 0) && !func_80255AE4(); phi_s2--){
            D_8036B800++;
            if (D_8036B800 >= 0x2A2) {
                D_8036B800 = 0;
            }
            temp_a0 = D_80382390[D_8036B800].unk0;
            if (temp_a0 != NULL && (func_802546E4(temp_a0) < 0x2AF8)) {
                D_80382390[D_8036B800].unk0 = func_80255888(D_80382390[D_8036B800].unk0);
            }
        }
    }
}

void func_8030ABA4(void) {
    s32 temp_lo;
    s32 temp_t7;
    struct_7AF80_1 *phi_s0;
    s32 phi_s2;
    struct_7AF80_0 *phi_s0_2;

    for(phi_s0 = D_80382394; phi_s0 < D_80382394 + 360; phi_s0++){
        if (phi_s0->unk0 != NULL) {
            temp_t7 = phi_s0 - D_80382394;
            func_8033B338(&phi_s0->unk0, &phi_s0->unk4);
            phi_s2 = temp_t7 *sizeof(struct_7AF80_1);
            *(BKSprite **)((s32)D_80382394 + phi_s2) = func_8033B6C4(temp_t7 + 0x572,  (BKSpriteDisplayData **)((s32)D_80382394 + phi_s2 + 4));
        }
    }
    
    for(phi_s0_2 = D_80382390; phi_s0_2 < D_80382390 + 674; phi_s0_2++){
        if(phi_s0_2->unk0 != NULL){
            temp_lo = phi_s0_2 - D_80382390;
            assetcache_release(phi_s0_2->unk0);
            D_80382390[temp_lo].unk0 = (BKModelBin *) assetcache_get(temp_lo + 0x2D1);

        }
    }
}
