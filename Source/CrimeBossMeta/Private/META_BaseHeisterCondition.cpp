#include "META_BaseHeisterCondition.h"

UMETA_BaseHeisterCondition::UMETA_BaseHeisterCondition() {
    this->InvertResult = false;
}

void UMETA_BaseHeisterCondition::SetConsideredHeister(FMETA_CharacterID inHeisterID) {
}

FMETA_CharacterID UMETA_BaseHeisterCondition::GetConsideredHeister() {
    return FMETA_CharacterID{};
}


