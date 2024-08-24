#include "IGS_GameStateGame.h"
#include "IGS_GlobalInventory.h"
#include "IGS_PlayerIntelManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_GameStateGame::AIGS_GameStateGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->R_HasEveryoneLoadedLevel = false;
    this->R_StartedPlayingMatch = false;
    this->IsGameStateDataReady = false;
    this->bHasEscapeVehicle = false;
    this->DeathCamLastDeadTime = 5.00f;
    this->FailsafeMissionEndTime = 10.00f;
    this->GlobalInventory = CreateDefaultSubobject<UIGS_GlobalInventory>(TEXT("GlobalInventory"));
    this->IntelManager = CreateDefaultSubobject<UIGS_PlayerIntelManager>(TEXT("IntelManager"));
    this->CopsArriveTimerEnd = -1.00f;
}

void AIGS_GameStateGame::SwitchStartupSource(EIGS_MissionStartupSource& outBranches) {
}


void AIGS_GameStateGame::SetVOFinishMissionCharacterAndID(const FText inID, AActor* inCharacter) {
}

void AIGS_GameStateGame::SetSpecificLootTypes(FGameplayTagContainer inSpecificLootTypes) {
}

void AIGS_GameStateGame::SetSpecialLoot(FIGS_SpecialLoot inSpecialLoot) {
}

void AIGS_GameStateGame::SetMissionValues(int32 inNeededMoney, int32 inMaxMoney) {
}

void AIGS_GameStateGame::SetMissionScenario(FGameplayTag inMissionScenario) {
}

void AIGS_GameStateGame::SetMissionName(FText inMissionName) {
}

void AIGS_GameStateGame::SetLightScenario(const EIGS_LightingScenarioType inLightScenario) {
}

void AIGS_GameStateGame::SetGameStateDataDEBUG(FIGS_GameStateData inData) {
}

void AIGS_GameStateGame::Server_RemoveLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_RemoveBonusLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddPocketLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddLootBag_Implementation() {
}

void AIGS_GameStateGame::Server_AddLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddBonusPocketLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateGame::Server_AddBonusLoot_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}



void AIGS_GameStateGame::OnRep_StartedPlayingMatch() {
}

void AIGS_GameStateGame::OnRep_HasEveryoneLoadedLevel() {
}

void AIGS_GameStateGame::OnRep_GameStateData() {
}

void AIGS_GameStateGame::OnRep_CopsArriveTimer() {
}



void AIGS_GameStateGame::MarkDataFinal() {
}

int32 AIGS_GameStateGame::GetWantedStars() const {
    return 0;
}

int32 AIGS_GameStateGame::GetTotalMissionValue() const {
    return 0;
}

EIGS_TileEnviroment AIGS_GameStateGame::GetTileEnvironment() const {
    return EIGS_TileEnviroment::Street;
}

EIGS_SWATVariationType AIGS_GameStateGame::GetSWATVariation() const {
    return EIGS_SWATVariationType::US_None;
}

EIGS_AITiers AIGS_GameStateGame::GetSWATTier() const {
    return EIGS_AITiers::AT_Tier1;
}

EIGS_MissionStartupSource AIGS_GameStateGame::GetStartupSource() const {
    return EIGS_MissionStartupSource::INVALID;
}

EIGS_MusicMissionState AIGS_GameStateGame::GetStartMusic() const {
    return EIGS_MusicMissionState::None;
}

FGameplayTagContainer AIGS_GameStateGame::GetSpecificLootTypes() const {
    return FGameplayTagContainer{};
}

FIGS_SpecialLoot AIGS_GameStateGame::GetSpecialLoot() const {
    return FIGS_SpecialLoot{};
}

EIGS_GangsterVariationType AIGS_GameStateGame::GetSecondaryEnemyVariation() const {
    return EIGS_GangsterVariationType::US_None;
}

EMETA_RespectLvl AIGS_GameStateGame::GetRespect() const {
    return EMETA_RespectLvl::Low;
}

EIGS_GangsterVariationType AIGS_GameStateGame::GetPrimaryEnemyVariation() const {
    return EIGS_GangsterVariationType::US_None;
}

EIGS_AITiers AIGS_GameStateGame::GetPrimaryEnemyTier() const {
    return EIGS_AITiers::AT_Tier1;
}

int32 AIGS_GameStateGame::GetObjectiveValue() const {
    return 0;
}

bool AIGS_GameStateGame::GetNeedObjectiveCompletion() const {
    return false;
}

EIGS_HubScenarioType AIGS_GameStateGame::GetMissionType() const {
    return EIGS_HubScenarioType::Empty;
}

FGameplayTag AIGS_GameStateGame::GetMissionTag() const {
    return FGameplayTag{};
}

FGameplayTag AIGS_GameStateGame::GetMissionScenario() const {
    return FGameplayTag{};
}

FText AIGS_GameStateGame::GetMissionName() const {
    return FText::GetEmpty();
}

FMETA_FPSBonusesFromMeta AIGS_GameStateGame::GetMetaBonusesData() const {
    return FMETA_FPSBonusesFromMeta{};
}


EIGS_LightingScenarioType AIGS_GameStateGame::GetLightingScenario() const {
    return EIGS_LightingScenarioType::Midday;
}

int32 AIGS_GameStateGame::GetIntelLevel() const {
    return 0;
}

EIGS_HubBackdropTypes AIGS_GameStateGame::GetHubVariant() const {
    return EIGS_HubBackdropTypes::AllRandom;
}

EIGS_HubDistrict AIGS_GameStateGame::GetHubDistrict() const {
    return EIGS_HubDistrict::INVALID;
}

int32 AIGS_GameStateGame::GetHeistersDataNum() const {
    return 0;
}

TArray<FCommonHeisterData> AIGS_GameStateGame::GetHeistersData() const {
    return TArray<FCommonHeisterData>();
}

EMETA_Heat AIGS_GameStateGame::GetHeat() const {
    return EMETA_Heat::INVALID;
}

UIGS_GlobalInventory* AIGS_GameStateGame::GetGlobalInventory() const {
    return NULL;
}

FIGS_GameStateData AIGS_GameStateGame::GetGameStateDataDEBUG() const {
    return FIGS_GameStateData{};
}

int32 AIGS_GameStateGame::GetExpectedPlayerCount() const {
    return 0;
}

EIGS_ScenarioDifficulty AIGS_GameStateGame::GetDifficulty() const {
    return EIGS_ScenarioDifficulty::SD_Unknown;
}

FMETA_ObjectiveTableRow AIGS_GameStateGame::GetBonusObjectiveData() const {
    return FMETA_ObjectiveTableRow{};
}

EIGS_HeistersBackupVariationType AIGS_GameStateGame::GetAllyVariation() const {
    return EIGS_HeistersBackupVariationType::US_None;
}

EIGS_AITiers AIGS_GameStateGame::GetAllyTier() const {
    return EIGS_AITiers::AT_Tier1;
}



void AIGS_GameStateGame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GameStateGame, R_HasEveryoneLoadedLevel);
    DOREPLIFETIME(AIGS_GameStateGame, R_StartedPlayingMatch);
    DOREPLIFETIME(AIGS_GameStateGame, GameStateData);
    DOREPLIFETIME(AIGS_GameStateGame, CopsArriveTimerEnd);
}


