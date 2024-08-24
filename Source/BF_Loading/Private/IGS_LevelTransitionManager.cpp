#include "IGS_LevelTransitionManager.h"

UIGS_LevelTransitionManager::UIGS_LevelTransitionManager() {
    this->CurrentState = EIGS_LevelTransitionType::LT_Unknown;
    this->Data = NULL;
}

void UIGS_LevelTransitionManager::SetLevelLoadTransitionState(EIGS_LevelTransitionType inState) {
}

EIGS_LevelTransitionType UIGS_LevelTransitionManager::GetLevelTransitionType() const {
    return EIGS_LevelTransitionType::LT_Unknown;
}

float UIGS_LevelTransitionManager::GetDelayTime() const {
    return 0.0f;
}

bool UIGS_LevelTransitionManager::ClientTravel(FName inLevelName) {
    return false;
}

bool UIGS_LevelTransitionManager::AttemptServerTravel(FName inLevelName) {
    return false;
}

bool UIGS_LevelTransitionManager::AttemptOpenLevel(FName inLevelName, bool inAbsolute, const FString& inOptions) {
    return false;
}


