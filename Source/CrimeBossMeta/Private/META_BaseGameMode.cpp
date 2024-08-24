#include "META_BaseGameMode.h"

AMETA_BaseGameMode::AMETA_BaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuState = EMETA_MenuState::MS_StartUp;
    this->MainWidget = NULL;
    this->bGamemodeComponentsLoaded = false;
}

void AMETA_BaseGameMode::SetMetaMenuState(EMETA_MenuState inState) {
}

void AMETA_BaseGameMode::SetComponentsLoaded() {
}


void AMETA_BaseGameMode::MenuStateChangeHandled(EMETA_MenuState inState) {
}

bool AMETA_BaseGameMode::IsMetaInDebugMode() {
    return false;
}

void AMETA_BaseGameMode::HandleMenuStateChange_Implementation(EMETA_MenuState inState) {
}

UMETA_UIEventsManagerComponent* AMETA_BaseGameMode::GetUIEventsManagerComponent_Implementation() {
    return NULL;
}

UMETA_RandEventManagerComponent* AMETA_BaseGameMode::GetRandManagerComponent_Implementation() {
    return NULL;
}

UMETA_NotificationManagerComponent* AMETA_BaseGameMode::GetNotificationManagerComponent_Implementation() {
    return NULL;
}

UMETA_MediaManagerComponent* AMETA_BaseGameMode::GetMediaManagerComponent_Implementation() {
    return NULL;
}

UMETA_GoalManagerComponent* AMETA_BaseGameMode::GetGoalManagerComponent_Implementation() {
    return NULL;
}

UMETA_EventManagerComponent* AMETA_BaseGameMode::GetEventManagerComponent_Implementation() {
    return NULL;
}

UMETA_CrewManagerComponent* AMETA_BaseGameMode::GetCrewManagerComponent_Implementation() {
    return NULL;
}


