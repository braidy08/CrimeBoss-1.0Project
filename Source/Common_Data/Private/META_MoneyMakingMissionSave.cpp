#include "META_MoneyMakingMissionSave.h"

FMETA_MoneyMakingMissionSave::FMETA_MoneyMakingMissionSave() {
    this->PrimaryEnemyVariationOverride = EIGS_GangsterVariationType::US_None;
    this->OwnerGoal = NULL;
    this->MissionExpenses = 0;
    this->HeistersCut = 0;
    this->FencingExpenses = 0;
    this->MissionOutCome = 0;
    this->ObjectiveMonetaryValue = 0;
    this->MaxMonetaryValue = 0;
    this->Reward1stStar = 0;
    this->Reward2ndStar = 0;
    this->Reward3rdStar = 0;
    this->LootMonetaryValue = 0;
    this->ObjectiveState = EMETA_ObjectiveState::InProgress;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
}

