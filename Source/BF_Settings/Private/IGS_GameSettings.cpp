#include "IGS_GameSettings.h"

UIGS_GameSettings::UIGS_GameSettings() {
    this->bSettingsValid = true;
    this->Language = TEXT("en");
    this->bOnlyMainDialogues = false;
    this->bSubtitlesEnabledValue = true;
    this->ColorVisionDeficiencyType = EColorVisionDeficiency::NormalVision;
    this->ColorVisionDeficiencySeverity = 50.00f;
}

UIGS_GameSettings* UIGS_GameSettings::Instance() {
    return NULL;
}


