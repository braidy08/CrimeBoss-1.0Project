#include "IGS_PlayerSuppressionHandlerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_PlayerSuppressionHandlerComponent::UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->DirectionalBulletWhizAkAudioEvent = NULL;
    this->BulletWhizAkAudioEvent = NULL;
    this->SniperSonicCrackAkEvent = NULL;
    this->SniperSonicCrackRtpc = NULL;
}

void UIGS_PlayerSuppressionHandlerComponent::PlayWhizSound() const {
}

void UIGS_PlayerSuppressionHandlerComponent::PlayDirectionalPlayerShotAtCue_Client_Implementation(const AIGS_IntelligentGameCharacter* inSourceCharacter) const {
}


