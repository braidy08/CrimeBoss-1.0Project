#include "IGS_InjuryComponentAI.h"

UIGS_InjuryComponentAI::UIGS_InjuryComponentAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeavyReactionTreshold = 0.45f;
    this->HeavyReactionChance = 0.50f;
    this->MediumReactionChance = 0.00f;
    this->MediumReactionCooldownMin = 7.00f;
    this->MediumReactionCooldownMax = 10.00f;
    this->m_Controller = NULL;
    this->m_Pawn = NULL;
    this->m_ObjectStatus = NULL;
    this->m_CharacterData = NULL;
    this->m_BleedingHandler = NULL;
}

void UIGS_InjuryComponentAI::RequestReaction(bool inIsHeavy, FVector inHitDirection) {
}


