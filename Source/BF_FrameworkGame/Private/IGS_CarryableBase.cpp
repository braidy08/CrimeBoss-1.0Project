#include "IGS_CarryableBase.h"
#include "IGS_SkinHandlerBase.h"

AIGS_CarryableBase::AIGS_CarryableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionTimerAfterDamaged = 4.00f;
    this->IsDamaged = false;
    this->IsDestroyed = false;
    this->SkinHandler = CreateDefaultSubobject<UIGS_SkinHandlerBase>(TEXT("SkinHandler"));
}


void AIGS_CarryableBase::DestroyCarryable_Implementation() {
}


