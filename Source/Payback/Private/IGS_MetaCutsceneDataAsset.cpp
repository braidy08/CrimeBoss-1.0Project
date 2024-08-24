#include "IGS_MetaCutsceneDataAsset.h"

UIGS_MetaCutsceneDataAsset::UIGS_MetaCutsceneDataAsset() {
    this->Partner = EMETA_Partner::None;
    this->EnvironmentAkState = NULL;
    this->MusicSongAkEvent = NULL;
    this->PlayDelay = 0.00f;
    this->PoseAnimationStartTime = 0.00f;
    this->MuteBackgroundMusic = false;
    this->MuteSounds = false;
    this->HideLevel = true;
    this->IsSkippable = true;
    this->CustomSlotPairing = false;
}

TArray<FGameplayTag> UIGS_MetaCutsceneDataAsset::GetAllChoicesTags() {
    return TArray<FGameplayTag>();
}


