#include "IGS_OutlineComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_OutlineComponent::UIGS_OutlineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentOutlineState = EIGS_CameraOutlineState::None;
    this->bUseRootForOutline = true;
    this->bShineWhenInactive = false;
    this->bSolidInteractiveOutline = false;
    this->bBlinkingInteractiveOutline = false;
    this->bPingOutline = false;
    this->bEnemyDetectingOutline = false;
    this->bEnemyPingOutline = false;
    this->bObjectiveOutline = false;
    this->bHeisterOutline = false;
    this->bHeister2Outline = false;
    this->bHeister3Outline = false;
    this->bHeister4Outline = false;
    this->bHighlightOutline = false;
    this->bIsShineEnabled = true;
}

void UIGS_OutlineComponent::SetOutlineCategoryState(EIGS_CameraOutlineState inCategory, bool inEnabled) {
}

void UIGS_OutlineComponent::SetComponentsToOutline(const TArray<USceneComponent*>& inComponentsToOutline) {
}

void UIGS_OutlineComponent::ResetOutline() {
}

void UIGS_OutlineComponent::RemoveComponentToOutline(UActorComponent* inComponentToOutline) {
}

void UIGS_OutlineComponent::RemoveComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline) {
}

void UIGS_OutlineComponent::OnRep_CurrentOutlineState() {
}

void UIGS_OutlineComponent::AddComponentToOutline(UActorComponent* inComponentToOutline) {
}

void UIGS_OutlineComponent::AddComponentsToOutline(const TArray<UActorComponent*>& inComponentsToOutline) {
}

void UIGS_OutlineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_OutlineComponent, CurrentOutlineState);
}


