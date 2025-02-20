#include <libultra.h>
#include "functions.h"
#include "variables.h"

extern s32 D_80276CB0;

/* .data */
// code crc0
s32 D_8038C750 = 0x0016D2FD;
// code crc1
s32 D_8038C754 = 0xFB70B01D;
// data crc
s32 D_8038C758 = 0x0004EFAC;

/* .bss */
struct {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[4];
    s32 unkC;
} sD_8038D6F0;

/* .code */
void __code3040_func_80389430(){
    if(getGameMode() != GAME_MODE_7_ATTRACT_DEMO){
        func_8029CF48(2, 1, 0.0f);
    }
}

void code3040_func_80389468(void){
    if(sD_8038D6F0.unk4 != D_8038C754 ||  sD_8038D6F0.unkC != D_80276CB0){
        __code3040_func_80389430();
    }
}
