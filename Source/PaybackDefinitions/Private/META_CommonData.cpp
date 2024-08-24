#include "META_CommonData.h"

UMETA_CommonData::UMETA_CommonData() {
    this->PlayersCharacter = EIGS_CharacterID::Char_Boss_Start;
    this->AmountOfMissionsCanBeCompletedByBossPerDay = 1;
    this->PrimaryWeapon = NULL;
    this->SecondaryWeapon = NULL;
    this->AmountOfMissionsCanBeCompletedByEachHeisterPerDay = 1;
    this->DayOfBunkruptcyWhenHeistersStartLeavePlayer = 3;
    this->TimeForCharactersMoodSwitchToNeutral = 5;
    this->ChanceForNoTraits = 0.60f;
    this->ChanceForOneTrait = 0.30f;
    this->ChanceForTwoTraits = 0.10f;
    this->InitialHeatState = EMETA_Heat::Low;
    this->HeatGradeValueForMissionWithAllStars = 1;
    this->HeatGradeValueForMissionWithTwoStars = 2;
    this->HeatGradeValueForMissionWithOneStar = 3;
    this->HeatGradeValueForMissionWithoutStars = 4;
    this->MaxPoliceInvestigationValue = 1000;
    this->PoliceInvestigationPerKilledCivilian = 0;
    this->PoliceInvestigationPerKilledDetective = 0;
    this->PoliceInvestigationPerStartedBancruptcy = 0;
    this->HeatLevelWhenPoliceInvestigation100Percent = EMETA_Heat::Low;
    this->PoliceInvestigationChangeForTurfCapture = 0;
    this->UseRandEventsCategoriesPriority = false;
    this->HowManyDaysGenericHeistersStayingInPoolForFuneral = 1;
    this->CooldownForFuneralOfGenericHeisters = 1;
    this->ChanceForSurvivalMissionForUniqueCharacters = 25;
    this->ChanceForSurvivalMissionForGenericCharacters = 25;
    this->ChanceForSelfReturnForUniqueCharacters = 40;
    this->ChanceForSelfReturnForGenericCharacters = 40;
    this->ChanceToLosePrimaryWeaponAfterReturn = 30;
    this->ChanceToLoseSecondaryWeaponAfterReturn = 30;
    this->ChanceOfArrestForUniqueCharacters = 20;
    this->ChanceOfArrestForGenericCharacters = 20;
    this->ChanceForDeathOfUniqueCharacter = 40;
    this->ChanceForDeathOfGenericCharacter = 40;
    this->DurationMoneyMakingOpportunities = 4;
    this->CooldownMoneyMakingOpportunities = 3;
    this->RemoveUnfinishedMissions = false;
    this->MaxAmountOfActiveGoals = 4;
    this->MaxAmountOfAvailableGoals = 3;
    this->MaxPriceCoefficient = 1.00f;
    this->IncreasePriceCoefficient = 0.50f;
    this->TradeVendorCooldownAfterFailure = 2;
    this->RandomPoolSize = 0;
    this->ChanceOfUsingPriorityPool = 0;
    this->ChanceOfCharacterCanBeSelectedForRevengePool = 0;
    this->RevengePoolSize = 0;
}

bool UMETA_CommonData::NeedRemoveUnfinishedMissions() {
    return false;
}

TArray<EMETA_TradeVendor> UMETA_CommonData::GetVendorsForTrade(FGameplayTag inLootTag) {
    return TArray<EMETA_TradeVendor>();
}

void UMETA_CommonData::GetTrendDataByLootTag(FGameplayTag inMainLootTag, FMETA_PawnShopTrendData& outTrendData, bool& outSuccess) {
}

int32 UMETA_CommonData::GetTradeVendorCooldownAfterFailure() {
    return 0;
}

FMETA_TradeRelationshipInfo UMETA_CommonData::GetTradeRelationshipInfo(EMETA_TradeRelationship inTradeRelationship, bool& bSuccess) {
    return FMETA_TradeRelationshipInfo{};
}

void UMETA_CommonData::GetTradeRelationshipData(TMap<EMETA_TradeRelationship, int32>& outBetterPriceChancesData, TMap<EMETA_TradeRelationship, int32>& outNoDealChancesData, TMap<EMETA_TradeRelationship, int32>& outVendorAttackChancesData) {
}

int32 UMETA_CommonData::GetTimeForCharactersMoodSwitchToNeutral() {
    return 0;
}

EMETA_RespectLvl UMETA_CommonData::GetRespectLvlRelatedToTurfsAmount(int32 inTurfsUnderControl) {
    return EMETA_RespectLvl::Low;
}

int32 UMETA_CommonData::GetRandomPoolSize() const {
    return 0;
}

float UMETA_CommonData::GetRandomizedPercentOfSoldiersArrestedByDetectiveOnPlayersTile() {
    return 0.0f;
}

EIGS_ScenarioDifficulty UMETA_CommonData::GetRandomizedDifficulty(EMETA_RespectLvl inRespectLvl) const {
    return EIGS_ScenarioDifficulty::SD_Unknown;
}

int32 UMETA_CommonData::GetRandomizedAmountOfDaysDetectivesStaysOnTileAfterNeutralization() {
    return 0;
}

TArray<EMETA_RandEventCategory> UMETA_CommonData::GetRandEventsCategoriesPriority() {
    return TArray<EMETA_RandEventCategory>();
}

FMETA_RandEventCategoryConfig UMETA_CommonData::GetRandEventCategoryConfig(EMETA_RandEventCategory inRandEventCategory) {
    return FMETA_RandEventCategoryConfig{};
}

void UMETA_CommonData::GetPricesForLootByVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag, int32 inAmountOfLoot, int32& outOriginPrice, int32& outIncreasePrice, int32& outMaxPrice) {
}

float UMETA_CommonData::GetPriceBonus(EMETA_TradeVendor inTradeVendor, FGameplayTag inLootTag) {
    return 0.0f;
}

int32 UMETA_CommonData::GetPoliceInvestigationPerStartedBancruptcy() const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationPerKilledDetective() const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationPerKilledCivilian() const {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationIncreaseForElapsedDay(EMETA_RespectLvl inCurrentRespect) {
    return 0;
}

int32 UMETA_CommonData::GetPoliceInvestigationChangeForTurfCapture() {
    return 0;
}

TMap<EMETA_PoliceInvestigationChangeForGraph, int32> UMETA_CommonData::GetPoliceInvestigationChangeForGraphAction() const {
    return TMap<EMETA_PoliceInvestigationChangeForGraph, int32>();
}

EIGS_CharacterID UMETA_CommonData::GetPlayersCharacterID() {
    return EIGS_CharacterID::Char_Unknown;
}

TMap<FGameplayTag, FMETA_PerkInfo> UMETA_CommonData::GetPerkInfoData() {
    return TMap<FGameplayTag, FMETA_PerkInfo>();
}

FMETA_PerkInfo UMETA_CommonData::GetPerkInfo(FGameplayTag inPerk, bool& bSuccess) {
    return FMETA_PerkInfo{};
}

void UMETA_CommonData::GetNextBossStatusByRespect(int32 inRespect, bool& outIsThereNextLvl, EMETA_RespectLvl& outNextBossStatus, int32& outNextBossRespect) {
}

int32 UMETA_CommonData::GetMaxRevengePoolSize() const {
    return 0;
}

int32 UMETA_CommonData::GetMaxPoliceInvestigationValue() const {
    return 0;
}

int32 UMETA_CommonData::GetMaxAmountOfAvailableGoals() {
    return 0;
}

int32 UMETA_CommonData::GetMaxAmountOfActiveGoals() {
    return 0;
}

TArray<FGameplayTag> UMETA_CommonData::GetMainLootTagsForTrends() {
    return TArray<FGameplayTag>();
}

FMETA_FloatInterval UMETA_CommonData::GetLootAmountPercentForAmbush() {
    return FMETA_FloatInterval{};
}

EMETA_IntelUnlockLevel UMETA_CommonData::GetIntelUnlockedLevelByIntelValue(int32 inIntelLevel) {
    return EMETA_IntelUnlockLevel::LOCK;
}

FMETA_IntelDataSetup UMETA_CommonData::GetIntelDataSetup() {
    return FMETA_IntelDataSetup{};
}

TMap<EMETA_TradeVendor, EMETA_TradeRelationship> UMETA_CommonData::GetInitialTradeRelationship() {
    return TMap<EMETA_TradeVendor, EMETA_TradeRelationship>();
}

EMETA_Heat UMETA_CommonData::GetInitialHeatState() {
    return EMETA_Heat::INVALID;
}

FGameplayTag UMETA_CommonData::GetID_SurvivalEvent() {
    return FGameplayTag{};
}

FGameplayTag UMETA_CommonData::GetID_SelfReturnEvent() {
    return FGameplayTag{};
}

FGameplayTag UMETA_CommonData::GetID_DeathEvent() {
    return FGameplayTag{};
}

int32 UMETA_CommonData::GetHowManyDaysGenericHeistersStayingInPoolForFuneral() {
    return 0;
}

EMETA_Heat UMETA_CommonData::GetHeatLevelWhenPoliceInvestigation100Percent() const {
    return EMETA_Heat::INVALID;
}

TMap<EMETA_Heat, FMETA_HealLevelData> UMETA_CommonData::GetHeatLevelsData() const {
    return TMap<EMETA_Heat, FMETA_HealLevelData>();
}

int32 UMETA_CommonData::GetHeatGradeByMissionObjectivesResults(bool inMissionSuccess, bool inClenExecObjectiveRes, bool inExtraObjectiveRes) {
    return 0;
}

FGameplayTagContainer UMETA_CommonData::GetGoodTraits() {
    return FGameplayTagContainer{};
}

FMETA_GangTradeInfo UMETA_CommonData::GetGangTradeInfo(EMETA_TradeVendor inTradeVendor, bool& bSuccess) {
    return FMETA_GangTradeInfo{};
}

FGameplayTag UMETA_CommonData::GetEdgeCaseObjective() {
    return FGameplayTag{};
}

int32 UMETA_CommonData::GetDurationMoneyMakingOpportunities() {
    return 0;
}

FMETA_DetectivesInvestigationConfig UMETA_CommonData::GetDetectivesInvestigationConfigForState(EMETA_Heat inHeatState) {
    return FMETA_DetectivesInvestigationConfig{};
}

FMETA_DetectiveChancesToAppear UMETA_CommonData::GetDetectiveChancesToAppear() {
    return FMETA_DetectiveChancesToAppear{};
}

FMETA_Interval UMETA_CommonData::GetDaysIntervalAfterLoss_SurvivalEvent() {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetDaysIntervalAfterLoss_SelfReturnEvent() {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetDaysIntervalAfterLoss_DeathEvent() {
    return FMETA_Interval{};
}

int32 UMETA_CommonData::GetDayOfBankruptcyWhenHeistersStartLeavePlayer() {
    return 0;
}

EIGS_AITiers UMETA_CommonData::GetCurrentSWATTier(int32 inInvestigation) {
    return EIGS_AITiers::AT_Tier1;
}

int32 UMETA_CommonData::GetCrewCapacity(EMETA_RespectLvl inBossStatus) const {
    return 0;
}

int32 UMETA_CommonData::GetCooldownMoneyMakingOpportunities() {
    return 0;
}

int32 UMETA_CommonData::GetCooldownForFuneralOfGenericHeisters() {
    return 0;
}

void UMETA_CommonData::GetChancesForWeaponsLoss_SelfReturnEvent(float& outChanceToLosePrimaryWeaponAfterReturn, float& outChanceToLoseSecondaryWeaponAfterReturn) {
}

int32 UMETA_CommonData::GetChanceOfUsingPriorityPool() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceOfCharacterCanBeSelectedForRevengePool() const {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_SurvivalEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_SelfReturnEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_DeathEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForUnique_ArrestEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_SurvivalEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_SelfReturnEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_DeathEvent() {
    return 0;
}

int32 UMETA_CommonData::GetChanceForGeneric_ArrestEvent() {
    return 0;
}

FMETA_CareerStartStuff UMETA_CommonData::GetCareerStartStuff() {
    return FMETA_CareerStartStuff{};
}

void UMETA_CommonData::GetBossLoadout(UClass*& outPrimaryWeapon, UClass*& outSecondaryWeapon, TArray<UClass*>& outEquipment) {
}

FGameplayTagContainer UMETA_CommonData::GetBadTraits() {
    return FGameplayTagContainer{};
}

FMETA_Interval UMETA_CommonData::GetAmountOfSuccessfulMissionsForNextUnlocks() const {
    return FMETA_Interval{};
}

FMETA_Interval UMETA_CommonData::GetAmountOfSuccessfulMissionsForFirstUnlock() const {
    return FMETA_Interval{};
}

int32 UMETA_CommonData::GetAmountOfMissionsCanBeCompletedByEachHeisterPerDay() const {
    return 0;
}

int32 UMETA_CommonData::GetAmountOfMissionsCanBeCompletedByBossPerDay() const {
    return 0;
}

int32 UMETA_CommonData::GetAmountOfInitialTraits() {
    return 0;
}

FMETA_Interval UMETA_CommonData::GetAmountMissionGeneratedEveryDay() {
    return FMETA_Interval{};
}

EMETA_AmbushType UMETA_CommonData::GetAmbushTypeByFPSMissionTag(FGameplayTag inMissionTag) {
    return EMETA_AmbushType::UNDEFINED;
}

FGameplayTag UMETA_CommonData::GetAmbushTagByType(EMETA_AmbushType inType) {
    return FGameplayTag{};
}

FMETA_AmbushConfig UMETA_CommonData::GetAmbushConfig() {
    return FMETA_AmbushConfig{};
}

FGameplayTagContainer UMETA_CommonData::GetAllowedLoot() {
    return FGameplayTagContainer{};
}

bool UMETA_CommonData::CanUseRandEventsCategoriesPriority() {
    return false;
}

bool UMETA_CommonData::CanLootItemBeTradedWithVendor(EMETA_TradeVendor inVendor, FGameplayTag inLootTag) {
    return false;
}


