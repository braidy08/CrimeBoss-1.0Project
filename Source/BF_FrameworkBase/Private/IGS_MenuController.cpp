#include "IGS_MenuController.h"

AIGS_MenuController::AIGS_MenuController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bComesFromMission = false;
}



