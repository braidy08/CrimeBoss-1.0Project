#include "IGS_ControllerSettings.h"

UIGS_ControllerSettings::UIGS_ControllerSettings() {
    this->bSettingsValid = true;
    this->ControllerSensitivity = 1.00f;
    this->InvertedVerticalLook = false;
    this->LeftDeadzone = 0.10f;
    this->RightDeadzone = 0.10f;
    this->ADSMultiplier = 1.00f;
    this->AimAssistSlowdownStrength = 1.00f;
    this->bUseLinearControllerCurve = false;
    this->bShouldPrioritizeUseInsteadOfReload = true;
    this->bEnableAimSnapping = false;
}

UIGS_ControllerSettings* UIGS_ControllerSettings::Instance() {
    return NULL;
}


