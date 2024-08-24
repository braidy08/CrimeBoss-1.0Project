#include "IGS_RenderingSettings.h"

UIGS_RenderingSettings::UIGS_RenderingSettings() {
    this->bSettingsValid = true;
    this->FullscreenModeValue = 1;
    this->ResolutionValue = 19;
    this->VSyncEnabledValue = false;
    this->ResolutionScaleValue = 98.00f;
    this->ProfileValue = 3;
    this->ViewDistanceQualityValue = 2;
    this->AntiAliasingQualityValue = 3;
    this->PostProcessingQualityValue = 2;
    this->ShadowQualityValue = 2;
    this->TextureQualityValue = 2;
    this->VisualEffectQualityValue = 2;
    this->FoliageQualityValue = 2;
    this->MotionBlurScaleFPV = 1.00f;
    this->MotionBlurScale3PV = 1.00f;
    this->BaseCameraFOVHorizontal = 110.00f;
    this->bWasFirstTimeBenchmarked = false;
    this->bWasFirstTimeMainMenuInitialized = false;
    this->DLSSMode = 0;
    this->XeSSmode = 0;
    this->FSRmode = 0;
    this->ReflexMode = 0;
    this->bDLAAenabled = false;
    this->ChosenDisplay = 0;
    this->MotionBlurEnabled = false;
    this->FramerateLimitInGame = 0;
    this->FramerateLimitInMenu = 0;
    this->FramerateLimitOutOfFocus = 0;
    this->bCanChangeMonitorPositions = true;
    this->bQualityModeForConsoles = false;
}

float UIGS_RenderingSettings::VerticalFOVToActualHorizontalFOV(float inVerticalFOV, FVector2D inViewportSize) {
    return 0.0f;
}

void UIGS_RenderingSettings::SetQualityLevels_Auto(bool inRunBenchmark) {
}

void UIGS_RenderingSettings::SetIsGamePausedInMenu(bool inIsPausedInMenu) {
}

void UIGS_RenderingSettings::SetIsCurrentGameModeMenu(bool inIsMenu) {
}

UIGS_RenderingSettings* UIGS_RenderingSettings::Instance() {
    return NULL;
}

float UIGS_RenderingSettings::HorizontalFOV2VerticalFOV(float inHorizontalFOV) {
    return 0.0f;
}

TArray<FIntPoint> UIGS_RenderingSettings::GetSupportedScreenResolutions() {
    return TArray<FIntPoint>();
}


