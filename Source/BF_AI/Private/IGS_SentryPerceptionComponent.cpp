#include "IGS_SentryPerceptionComponent.h"

UIGS_SentryPerceptionComponent::UIGS_SentryPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIMemoryUpdateTick = 0.30f;
    this->AIMemoryUpdateInitialDelay = 2.00f;
    this->SightForgetTime = 0.50f;
}

void UIGS_SentryPerceptionComponent::OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus) {
}


