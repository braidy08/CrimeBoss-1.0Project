#include "IGS_MuzzleFlashHandlerComponent.h"

UIGS_MuzzleFlashHandlerComponent::UIGS_MuzzleFlashHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarrelSmokeStartAfterShots = 6;
    this->MuzzleFlashStopTime = 0.25f;
    this->MaxTimeBetweenShotsForBarrelSmoke = 0.30f;
    this->LightStopTime = 0.04f;
    this->LightFadeInSpeed = 100.00f;
    this->LightFadeOutSpeed = 50.00f;
    this->bResetBarrelSmokeOnReactivate = false;
}

void UIGS_MuzzleFlashHandlerComponent::MuzzleFlashDoEffect() {
}


