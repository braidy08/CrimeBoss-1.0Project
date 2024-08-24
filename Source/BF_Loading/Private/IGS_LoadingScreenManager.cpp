#include "IGS_LoadingScreenManager.h"

UIGS_LoadingScreenManager::UIGS_LoadingScreenManager() {
    this->Data = NULL;
    this->BackgroundTexture = NULL;
}

void UIGS_LoadingScreenManager::SetLoadingScreenSetupType(UObject* inWCO, FGameplayTag inTag) {
}

void UIGS_LoadingScreenManager::SetLoadingScreenSecondaryText(UObject* inWCO, FText InText) {
}

void UIGS_LoadingScreenManager::SetLoadingScreenMainText(UObject* inWCO, FText InText) {
}

void UIGS_LoadingScreenManager::SetDebugState(UObject* inWCO, bool inState) {
}

void UIGS_LoadingScreenManager::SetAdditionalLoadingScreenTips(UObject* inWCO, FGameplayTagContainer inTagContainer) {
}

bool UIGS_LoadingScreenManager::IsLoadingScreenSetupTypeSet(UObject* inWCO) {
    return false;
}

bool UIGS_LoadingScreenManager::GetDebugState(UObject* inWCO, bool inState) {
    return false;
}


