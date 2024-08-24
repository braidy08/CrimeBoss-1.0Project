#include "IGS_FootstepsBaseComponent.h"

UIGS_FootstepsBaseComponent::UIGS_FootstepsBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMakesNoise = false;
    this->BaseNoiseLoudness = 0.17f;
    this->LandingNoiseMult = 2.00f;
    this->JumpingNoiseMult = 0.00f;
    this->WalkingNoiseMult = 1.00f;
    this->RunningNoiseMult = 1.00f;
    this->SprintingNoiseMult = 1.80f;
    this->CrouchingNoiseMult = 0.00f;
    this->ImpactID = NULL;
}


