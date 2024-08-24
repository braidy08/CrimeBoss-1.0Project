#include "IGS_SecurityCameraViewer.h"
#include "Net/UnrealNetwork.h"

AIGS_SecurityCameraViewer::AIGS_SecurityCameraViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mR_AllCamerasDisabled = false;
    this->mR_AllowDisablingCameras = true;
    this->SecurityCameraPlayerController = NULL;
    this->PlayerController = NULL;
    this->InteractiveComponent = NULL;
    this->MonitorMesh = NULL;
    this->AkAudioListener = NULL;
    this->EnterCameraAkEvent = NULL;
    this->ExitCameraAkEvent = NULL;
    this->ServoStartAkAudioEvent = NULL;
    this->ServoStopAkAudioEvent = NULL;
    this->ChangeCameraAkAudioEvent = NULL;
    this->AkStateMountNormal = NULL;
    this->AkStateMountSecurityCamera = NULL;
    this->AkStateMountSecurityCameraNoSignal = NULL;
    this->DefaultController = NULL;
}




void AIGS_SecurityCameraViewer::SetCanSwitchCameras(bool InValue) {
}

void AIGS_SecurityCameraViewer::SetCameraSources(TArray<AIGS_SecurityCamera*> inCameras) {
}

void AIGS_SecurityCameraViewer::Server_TurnCamera_Implementation(float inAxisValue) const {
}

void AIGS_SecurityCameraViewer::Server_LookUpCamera_Implementation(float inAxisValue) const {
}

void AIGS_SecurityCameraViewer::Server_ExitCameraControl_Implementation() {
}

void AIGS_SecurityCameraViewer::Server_DisableAllCameras_Implementation() {
}

void AIGS_SecurityCameraViewer::Server_ChangeCamera_Implementation(bool inNextCamera) {
}

void AIGS_SecurityCameraViewer::OnRep_AllowDisablingCameras() {
}

void AIGS_SecurityCameraViewer::OnRep_AllCamerasDisabled() {
}


bool AIGS_SecurityCameraViewer::IsActiveCameraDisabled() const {
    return false;
}


AIGS_GameCharacterFramework* AIGS_SecurityCameraViewer::GetUser() {
    return NULL;
}

int32 AIGS_SecurityCameraViewer::GetSourcesCount() const {
    return 0;
}

int32 AIGS_SecurityCameraViewer::GetActiveCameraIndex() const {
    return 0;
}

void AIGS_SecurityCameraViewer::DisableAllCameras() {
}

void AIGS_SecurityCameraViewer::Client_OnActiveCameraChanged_Implementation(AIGS_SecurityCamera* inCamera, int32 inActiveCameraID, bool inIsDisabled) {
}

void AIGS_SecurityCameraViewer::Client_ExitCameraControl_Implementation(int32 inActiveCameraID) {
}

void AIGS_SecurityCameraViewer::Client_EnterCameraControl_Implementation(int32 inActiveCameraID, int32 inCameraSourcesCount) {
}

void AIGS_SecurityCameraViewer::AllowDisablingCameras(bool InValue) {
}

void AIGS_SecurityCameraViewer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_SecurityCameraViewer, mR_AllCamerasDisabled);
    DOREPLIFETIME(AIGS_SecurityCameraViewer, mR_AllowDisablingCameras);
}


