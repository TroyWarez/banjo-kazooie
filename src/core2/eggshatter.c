#include <libultra.h>
#include "functions.h"
#include "variables.h"

/* .data */
ParticleSettingsVelocityAccelerationPosition  D_803637A0 = {
    {{-200.0f, 200.0f, -200.0f}, {200.0f, 400.0f, 200.0f}},
    {{0.0f, -800.0, 0.0f}, {0.0f, -800.0f, 0.0f}},
    {{-10.0f, -10.0f, -10.0f}, {10.0f, 10.0f, 10.0f}}
};

/* .bss */
ParticleEmitter *gEggShatter_controller;

/*.code */
void eggShatter_draw(Gfx **gPtr, Mtx **mPtr, Vtx **vPtr){
    particleEmitter_draw(gEggShatter_controller, gPtr, mPtr, vPtr);
}

void eggShatter_free(void){
    particleEmitter_free(gEggShatter_controller);
}

void eggShatter_init(void){
    gEggShatter_controller = particleEmitter_new(20);
    particleEmitter_setModel(gEggShatter_controller, 0x360);
    particleEmitter_func_802EF9F8(gEggShatter_controller, 0.6f);
    particleEmitter_func_802EFA18(gEggShatter_controller, 0);
    particleEmitter_setStartingScaleRange(gEggShatter_controller, 0.8f, 1.0f);
    particleEmitter_setAngularVelocityRange(gEggShatter_controller, 400.0f, 400.0f, 400.0f, 800.0f, 800.0f, 800.0f);
    particleEmitter_setSpawnIntervalRange(gEggShatter_controller, 0.0f, 0.01f);
    particleEmitter_setParticleLifeTimeRange(gEggShatter_controller, 1.5f, 1.5f);
    particleEmitter_setVelocityAccelerationAndPositionRanges(gEggShatter_controller, &D_803637A0);
}

void eggShatter_update(void){
    particleEmitter_update(gEggShatter_controller);
}

void eggShatter_new(f32 position[3]){
    particleEmitter_setPosition(gEggShatter_controller, position);
    particleEmitter_emitN(gEggShatter_controller, 5);
}

void eggShatter_defrag(void){
    if(gEggShatter_controller != NULL){
        gEggShatter_controller = partEmitMgr_defragEmitter(gEggShatter_controller);
    }
}
