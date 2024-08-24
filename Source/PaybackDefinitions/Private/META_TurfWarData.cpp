#include "META_TurfWarData.h"

UMETA_TurfWarData::UMETA_TurfWarData() {
    this->MaxArmyTierForInnerUpgrades = EMETA_ArmyTier::Elite;
    this->CanTilesAroundDetectiveBeAttacked = true;
    this->PlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile = 0;
    this->PlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile = 0;
    this->AttemptsToCaptureTerritory = 1;
    this->PlayerLoseAllSentSoldiersAfterFailedDefence = true;
    this->InitialSoldiersAmount = 10;
    this->CountdownForAttackAfterLostTile = 0;
    this->InitialArmyTier = EMETA_ArmyTier::Low;
    this->NumberOfEnemySoldiersMultiplier = 2.00f;
    this->ArmyTierMultiplier_IfEnemyTierHigherThanPlayers = 1.00f;
    this->ArmyTierMultiplier_IfEnemyTierLowerThanPlayers = 1.00f;
    this->HowManyDaysGangRememberLostTerritory = 3;
    this->HowManyDaysGangExistsInEnemiesList = 1;
    this->HowManyDaysGangCanAttackMore = 2;
    this->HowManyAttacksCanDoGangsForDaysWithHighNumberAttacks = 2;
    this->DaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce = 3;
    this->MinTileStrength = 0;
    this->MaxTileStrength = 85;
    this->TileCurrentStrengthChangeWhenPlayerLosesAttack = -10;
    this->TileCurrentStrengthChangeWhenPlayerWinsDefense = 10;
    this->StrengthChangeIfTileIsolated = -20;
    this->AmountOfFriendlyNeighbourTilesToConsiderTileAsConnected = 2;
    this->StrengthChangeIfTileConnected = 10;
    this->StrengthChangeIfTileWillCreateIsolatedTile = 10;
    this->StrengthTweakWhenAIBossHasOnly2Tiles = 30;
    this->StrengthTweakWhenAIBossHasOnly3Tiles = 15;
    this->StrengthTweakWhenAIBossHasDifferentAmountOfTiles = 0;
    this->StrengthTweakForAIBossAfterTileLosingToAI = 5;
    this->StrengthTweakForAIBossAfterTileLosingToPlayer = 15;
    this->StrengthTweakForAIBossAfterTileCapturingFromAI = -5;
    this->StrengthTweakForAIBossAfterTileCapturingFromPlayer = -10;
    this->ChanceToAttackNeutralTurf = 75;
    this->ChanceToAttackInRetaliatorTactic = 75;
    this->BaseChanceToAttackAnyAdjacentTerritoryByAI = 25;
    this->ChanceIncreaseToAttackAnyAdjacentTerritoryByAI = 5;
    this->ChanceToAttackTerritoryBelongingToTheGangFromEnemyList = 50;
}

float UMETA_TurfWarData::RandomizeSoldiersCasualtiesInPercentsAfterNeutralAttack() {
    return 0.0f;
}

FMETA_UIArmySizeConfig UMETA_TurfWarData::GetUIArmySizeConfig() {
    return FMETA_UIArmySizeConfig{};
}

EMETA_TurfMissionDifficulty UMETA_TurfWarData::GetTurfMissionDifficulty(int32 inAiArmySize) {
    return EMETA_TurfMissionDifficulty::None;
}

FMETA_Interval UMETA_TurfWarData::GetTileStrengthInterval() {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_TurfWarData::GetTileStartingBaseStrength() {
    return FMETA_Interval{};
}

int32 UMETA_TurfWarData::GetTileCurrentStrengthChangeWhenPlayerWinsDefense() {
    return 0;
}

int32 UMETA_TurfWarData::GetTileCurrentStrengthChangeWhenPlayerLosesAttack() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakWhenAIBossHasOnly3Tiles() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakWhenAIBossHasOnly2Tiles() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakWhenAIBossHasDifferentAmountOfTiles() {
    return 0;
}

FMETA_Interval UMETA_TurfWarData::GetStrengthTweaksIntervalForAIBossAfterTerritoryChanges() {
    return FMETA_Interval{};
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileLosingToPlayer() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileLosingToAI() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileCapturingFromPlayer() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthTweakForAIBossAfterTileCapturingFromAI() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthChangeIntensity(EMETA_AIBossStrengthChangeIntensity inIntensity) {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthChangeIfWillCreateIsolatedTile() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthChangeIfTileIsolated() {
    return 0;
}

int32 UMETA_TurfWarData::GetStrengthChangeIfTileConnected() {
    return 0;
}

int32 UMETA_TurfWarData::GetRandomizedValidTileGroup() {
    return 0;
}

int32 UMETA_TurfWarData::GetRandomizedPlayersInitialTerritory() {
    return 0;
}

TArray<FGameplayTagContainer> UMETA_TurfWarData::GetPlayersInitialTileGroups() {
    return TArray<FGameplayTagContainer>();
}

int32 UMETA_TurfWarData::GetPlayersInitialSoldiersAmount() {
    return 0;
}

EMETA_ArmyTier UMETA_TurfWarData::GetPlayersInitialArmyTier() {
    return EMETA_ArmyTier::Low;
}

int32 UMETA_TurfWarData::GetPlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile() {
    return 0;
}

int32 UMETA_TurfWarData::GetPlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile() {
    return 0;
}

int32 UMETA_TurfWarData::GetPlayersArmyLimit(EMETA_RespectLvl inPlayerRespect) {
    return 0;
}

FMETA_PlayerEndAgonyConfig UMETA_TurfWarData::GetPlayerEndAgonyConfig() const {
    return FMETA_PlayerEndAgonyConfig{};
}

float UMETA_TurfWarData::GetNumberOfEnemySoldiersMultiplier() {
    return 0.0f;
}

void UMETA_TurfWarData::GetMinAmountOfSoldiersForAttackAndDefence(EMETA_RespectLvl inRespectLvl, int32& outMinForAttack, int32& outMinForDefence) {
}

EMETA_ArmyTier UMETA_TurfWarData::GetMaxArmyTierForInnerUpgrades() {
    return EMETA_ArmyTier::Low;
}

FMETA_GangInitialConfiguration UMETA_TurfWarData::GetGangInitialConfig(EMETA_Gang inGang) {
    return FMETA_GangInitialConfiguration{};
}

int32 UMETA_TurfWarData::GetDurationOfLostTerritoryRemembering() {
    return 0;
}

int32 UMETA_TurfWarData::GetDurationInsideEnemiesList() {
    return 0;
}

FMETA_DefenceResultCalculatingConfigForAI UMETA_TurfWarData::GetDefenceResultCalculationConfigForAI() {
    return FMETA_DefenceResultCalculatingConfigForAI{};
}

int32 UMETA_TurfWarData::GetDaysAmountForMoreAttacksk() {
    return 0;
}

int32 UMETA_TurfWarData::GetDaysAmountForGangInTopEnemiesListOfAllGangsAfterBreakingTruce() {
    return 0;
}

void UMETA_TurfWarData::GetDataSetup_IfEnemyTierLowerThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) {
}

void UMETA_TurfWarData::GetDataSetup_IfEnemyTierHigherThanPlayers(float& outMultiplier, FMETA_FloatInterval& outClamp) {
}

int32 UMETA_TurfWarData::GetCountdownForAttackAfterLostTile() {
    return 0;
}

TArray<FMETA_ConditionForArmyTierChanging> UMETA_TurfWarData::GetConditionsForArmyTierChanging() {
    return TArray<FMETA_ConditionForArmyTierChanging>();
}

float UMETA_TurfWarData::GetChanceToAttackNeutralTerritoryByAI() {
    return 0.0f;
}

float UMETA_TurfWarData::GetChanceToAttackInRetaliatorTactic() {
    return 0.0f;
}

float UMETA_TurfWarData::GetChanceToAttackAdjacentTerritoryToTheGangFromEnemiesList() {
    return 0.0f;
}

float UMETA_TurfWarData::GetChanceIncreaseToAttackAnyAdjacentTerritoryByAI() {
    return 0.0f;
}

float UMETA_TurfWarData::GetBaseChanceToAttackAnyAdjacentTerritoryByAI() {
    return 0.0f;
}

int32 UMETA_TurfWarData::GetAttemptsToCaptureTerritory() {
    return 0;
}

TArray<EMETA_Gang> UMETA_TurfWarData::GetArrayOfGangsWhichCanAttackAnyTile() {
    return TArray<EMETA_Gang>();
}

FMETA_ArmySizeConfigForAI UMETA_TurfWarData::GetArmySizeLimitsByPlayerRespect(EMETA_RespectLvl inRespectLvl) {
    return FMETA_ArmySizeConfigForAI{};
}

int32 UMETA_TurfWarData::GetAmountOfFriendlyNeighbourTilesToConsiderTileAsConnected() {
    return 0;
}

int32 UMETA_TurfWarData::GetAmountOfAttackskForMoreAttacksDays() {
    return 0;
}

TArray<EMETA_GangStrategy> UMETA_TurfWarData::GetAIStrategiesThatAttackMore() {
    return TArray<EMETA_GangStrategy>();
}

FMETA_Interval UMETA_TurfWarData::GetAIArmySizeForPlayersAttackOnLastTile() {
    return FMETA_Interval{};
}

bool UMETA_TurfWarData::CheckPossibilityToAttackTilesAroundDetective() {
    return false;
}

bool UMETA_TurfWarData::CanPlayerLoseAllSentSoldiersAfterFailedDefence() {
    return false;
}


