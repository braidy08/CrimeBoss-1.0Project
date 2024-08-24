#include "IGS_StealthSettings.h"

UIGS_StealthSettings::UIGS_StealthSettings() {
    this->DefaultDetectionUpTime = 2.00f;
    this->DetectionDownTime = 5.00f;
    this->CrouchDetectionMultiplier = 0.60f;
    this->SprintDetectionMultiplier = 2.00f;
    this->FarDistanceDetectionMultiplier = 0.50f;
    this->FarAngleDetectionMultiplier = 0.50f;
    this->AmbientLifeDetectionMuliplier = 0.60f;
    this->BotDetectionMuliplier = 0.20f;
    this->CombatStateDetectionMuliplier = 4.00f;
    this->FootstepDetectionMuliplier = 0.90f;
    this->CameraDetectionUpTime = 3.00f;
    this->CameraDetectionDownTime = 2.00f;
    this->DetectionIncreaseThreshold = 0.01f;
    this->DetectedCooldown = 3.00f;
    this->DetectionMidPoint = 0.50f;
    this->UseFootstepDetection = true;
    this->StrikeAddedCooldown = 5.00f;
    this->CivEscapedDelay = 10.00f;
}


