#include <libultra.h>
#include "functions.h"
#include "variables.h"

void func_8038C300(Actor *this);

ActorInfo D_80390B40 = {
    0x198, 0x1ca, 0x41e, 0x0, NULL,
    func_8038C300, NULL, actor_draw,
    0, 0, 0.0f, 0
};

void func_8038C300(Actor *this){
    if(!this->volatile_initialized){
        this->marker->propPtr->unk8_3 = 1;
        this->volatile_initialized = TRUE;
        skeletalAnim_set(this->unk148, 0x140, 0.0f, 1.0f);
    }
}
