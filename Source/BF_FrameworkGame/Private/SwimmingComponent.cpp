#include "SwimmingComponent.h"

USwimmingComponent::USwimmingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterJumpIn = NULL;
    this->WaterJumpOut = NULL;
    this->m_AudioComponent = NULL;
}


