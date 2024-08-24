#include "IGS_DamageTypeBase.h"

UIGS_DamageTypeBase::UIGS_DamageTypeBase() {
    this->DamageType = EIGS_DamageType::Unknown;
    this->HeisterReceiveDamageMult = 1.00f;
    this->bShouldConsiderBodyParts = true;
    this->bShouldBeAffectedByDamageLimiter = false;
    this->StrengthType = EIGS_DamageStrengthType::Light;
    this->DistanceFalloff = 100.00f;
    this->bCanGib = false;
    this->GibRadius = 200.00f;
    this->GibChance = 0.10f;
    this->bStuns = false;
    this->StunDuration = -1.00f;
    this->StunGameplayEffect = NULL;
}


