#include "IGS_MissionResult.h"

FIGS_MissionResult::FIGS_MissionResult() {
    this->MissionResult = ECommonMissionResult::Res_Abort;
    this->bCleanExecution = false;
    this->bBonusObjective = false;
    this->Rating = 0;
    this->Score = 0;
    this->ObjectiveValue = 0;
    this->BonusValue = 0;
    this->BonusCash = 0;
    this->KilledCivilians = 0;
    this->KilledPolice = 0;
    this->KilledGangsters = 0;
    this->KilledSWAT = 0;
    this->bIsChainMission = false;
    this->bChainCompleted = false;
    this->bIsFilled = false;
}

