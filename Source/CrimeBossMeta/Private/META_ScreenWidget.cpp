#include "META_ScreenWidget.h"

UMETA_ScreenWidget::UMETA_ScreenWidget() {
    this->UIEventsManager = NULL;
    this->MediaManager = NULL;
    this->MetaGameMode = NULL;
}

void UMETA_ScreenWidget::RequestSubscreenChangeByIndex_Implementation(int32 inDifference) {
}

void UMETA_ScreenWidget::OnGamemodeReady_Implementation() {
}

void UMETA_ScreenWidget::OnFeatureUnlocked_Implementation(FGameplayTag inFeatureTag, bool inChildTagsUnlockedToo, bool inSilent, const FText& inCutsceneID, bool inVoiceoverOnly) {
}


