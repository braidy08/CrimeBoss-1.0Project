#include "IGS_AbilityTask_HolsterGun.h"

UIGS_AbilityTask_HolsterGun::UIGS_AbilityTask_HolsterGun() {
    this->bIsHolster = false;
    this->PlayRate = 1.00f;
    this->bStopWhenAbilityEnds = true;
}

UIGS_AbilityTask_HolsterGun* UIGS_AbilityTask_HolsterGun::CreateHolsterGunProxy(UGameplayAbility* inOwningAbility, FName inTaskInstanceName, bool inIsHolster, float InRate, bool NewBStopWhenAbilityEnds) {
    return NULL;
}


