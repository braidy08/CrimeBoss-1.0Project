#include "META_StoryMission.h"

UMETA_StoryMission::UMETA_StoryMission() {
}

void UMETA_StoryMission::SetDataFromSave(const UObject* inWCO, const FMETA_StoryMissionSave& inStoryMissionSave) {
}

FMETA_StoryMissionSave UMETA_StoryMission::GetSaveData() {
    return FMETA_StoryMissionSave{};
}

FGameplayTagContainer UMETA_StoryMission::GetRestrictedTiles() const {
    return FGameplayTagContainer{};
}

FMETA_FPSMissionRowInfo UMETA_StoryMission::GetInfo() const {
    return FMETA_FPSMissionRowInfo{};
}

FGameplayTagContainer UMETA_StoryMission::GetAllowedTiles() const {
    return FGameplayTagContainer{};
}


