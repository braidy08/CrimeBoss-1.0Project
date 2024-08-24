#include "IGS_TogglesSettings.h"

UIGS_TogglesSettings::UIGS_TogglesSettings() {
    this->bSettingsValid = true;
    this->bSprintToggleable = false;
    this->bCrouchToggleable = true;
    this->bAimToggleable = false;
    this->bSprintInterruptsReload = true;
    this->bMagCheckInSprintAllowed = true;
}

UIGS_TogglesSettings* UIGS_TogglesSettings::Instance() {
    return NULL;
}


