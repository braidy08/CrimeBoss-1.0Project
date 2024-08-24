#include "IGS_AimAssistComponent.h"

UIGS_AimAssistComponent::UIGS_AimAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnappingTime = 2.00f;
    this->AimSnapSpeed = 50.00f;
    this->bIsEnabled = true;
    this->ControllerSettings = NULL;
}


