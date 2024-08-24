#include "IGS_SentryGun.h"

AIGS_SentryGun::AIGS_SentryGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponObjectClass = NULL;
    this->Shooter = NULL;
    this->AkComponent = NULL;
    this->WeaponObject = NULL;
    this->ShootAngleDegrees = 15.00f;
}

void AIGS_SentryGun::Multicast_CosmeticShootStopped_Implementation() {
}

void AIGS_SentryGun::Multicast_CosmeticShootStarted_Implementation() {
}




