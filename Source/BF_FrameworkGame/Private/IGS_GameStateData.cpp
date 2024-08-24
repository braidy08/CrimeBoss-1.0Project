#include "IGS_GameStateData.h"

FIGS_GameStateData::FIGS_GameStateData() {
    this->StartupSource = EIGS_MissionStartupSource::Editor;
    this->MissionType = EIGS_HubScenarioType::Empty;
    this->TileEnvironment = EIGS_TileEnviroment::Street;
    this->HubDistrict = EIGS_HubDistrict::Downtown;
    this->HubVariant = EIGS_HubBackdropTypes::AllRandom;
    this->LightingScenario = EIGS_LightingScenarioType::Midday;
    this->Heat = EMETA_Heat::INVALID;
    this->WantedStars = 0;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->StartMusic = EIGS_MusicMissionState::None;
    this->PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    this->SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->SecondaryEnemyTier = EIGS_AITiers::AT_Tier1;
    this->SWATVariation = EIGS_SWATVariationType::US_None;
    this->SWATTier = EIGS_AITiers::AT_Tier1;
    this->AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    this->AllyTier = EIGS_AITiers::AT_Tier1;
    this->IntelLevel = 0;
    this->ExpectedPlayerCount = 0;
    this->TotalMissionValue = 0;
    this->ObjectiveValue = 0;
    this->Respect = EMETA_RespectLvl::Low;
    this->bIsInited = false;
    this->bDataMarkedFinal = false;
    this->NeedObjectiveCompletion = false;
}

