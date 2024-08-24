#include "META_EconomyData.h"
#include "Templates/SubclassOf.h"

UMETA_EconomyData::UMETA_EconomyData() {
    this->ChanceRegenerateAllPerksIfTheyAreNegative = 0;
    this->DefaultMoneyMakingScenariosProbabilities = 0;
    this->StoryMissionRewardMultiplier = 1.50f;
    this->FailNassaraExpenses = 0;
    this->NassaraExpensesFor1stStar = 0;
    this->NassaraExpensesFor2stStar = 0;
    this->NassaraExpensesFor3stStar = 0;
    this->WeaponCoefficientPriceForHeister = 1.00f;
    this->EquipmentCoefficientPriceForHeister = 1.00f;
    this->HeisterMarketAvailableInDays = 1;
    this->HeisterMarketCooldownInDays = 0;
    this->PriceMultiplierForFirstGeneration = 1.00f;
    this->HeistersAmountOverrideInFirstGeneration = 0;
    this->HeistersPoolRefreshCostMultiplier = 0.00f;
    this->HeistersPoolRefreshStartPriceMultiplier = 1.00f;
    this->WeaponMarketAvailableInDays = 1;
    this->WeaponMarketCooldownInDays = 0;
    this->WeaponsPoolRefreshStartPriceMultiplier = 1.00f;
    this->WeaponsPoolRefreshCostMultiplier = 0.00f;
    this->ChanceForTileIncomeToBeLoot = 0;
    this->FrequencyOfIncomeValueRecompute = 0;
    this->RewardValueReductionMultiplierForRepeatedCapture = 1.00f;
    this->NumberOfHPSegmentsForAutomaticRecovery = 0.40f;
    this->MultiplierForHealing = 1.00f;
    this->HealCostMultiplierForUniqueCharacter = 0.00f;
    this->CostModifierForInstantHealing = 0.00f;
    this->DurationOfHealing = 0;
    this->DaysForRehabilitationAfterBankruptValue = 5;
    this->BankruptValue = -100000;
    this->NumberOfBuyableAssets = 0;
    this->BM_LootEventCooldown = 0;
    this->BM_LootProposalsAmount = 0;
    this->BM_LootEventSelectionExpiration = 0;
    this->WarehouseAttackCooldown = 0;
    this->StartingChance = 0;
    this->DailyChanceIncrease = 0;
    this->MinAmountOfEachLootCanBeStolen = 0;
    this->CommonData = NULL;
}

void UMETA_EconomyData::UpdateWeaponsCachedData(const UObject* inWCO) {
}

void UMETA_EconomyData::SetCharacterPoolNames(const UObject* inWCO, TArray<FMETA_CharacterInfo>& inGeneratedPool) {
}

void UMETA_EconomyData::RefreshCommonData(const UObject* inWCO) {
}

void UMETA_EconomyData::RandomizePerksByIDAndTier(const UObject* inWCO, EIGS_CharacterID inID, EMETA_CharacterTier inHeisterTier, bool bIsLevelUp, const int32 inAmountOfEquipment, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, TArray<FMETA_PerkData>& outRandomizedPerks) {
}

bool UMETA_EconomyData::IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const {
    return false;
}

FMETA_WeaponTurfReward UMETA_EconomyData::GetWeaponTurfRewardForRepeatedCapture() {
    return FMETA_WeaponTurfReward{};
}

FMETA_WeaponTurfReward UMETA_EconomyData::GetWeaponTurfReward() {
    return FMETA_WeaponTurfReward{};
}

int32 UMETA_EconomyData::GetWeaponsPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl) {
    return 0;
}

float UMETA_EconomyData::GetWeaponsPoolRefreshMultiplier() {
    return 0.0f;
}

TMap<UMETA_Weapon*, int32> UMETA_EconomyData::GetWeaponsPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus) {
    return TMap<UMETA_Weapon*, int32>();
}

TArray<TSubclassOf<UMETA_WeaponInventoryObject>> UMETA_EconomyData::GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality) {
    return TArray<TSubclassOf<UMETA_WeaponInventoryObject>>();
}

int32 UMETA_EconomyData::GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality) const {
    return 0;
}

int32 UMETA_EconomyData::GetWeaponMarketCooldownInDays() const {
    return 0;
}

int32 UMETA_EconomyData::GetWeaponMarketAvailableInDays() const {
    return 0;
}

void UMETA_EconomyData::GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const {
}

float UMETA_EconomyData::GetWeaponCoefficientPriceForHeister() const {
    return 0.0f;
}

TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> UMETA_EconomyData::GetWarehouseWealthPerRespect() const {
    return TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData>();
}

int32 UMETA_EconomyData::GetWarehouseAttackCooldown() const {
    return 0;
}

int32 UMETA_EconomyData::GetUniqueCharacterMissionCut(EIGS_CharacterID inCharacterID) {
    return 0;
}

FMETA_TurfRewardsDistribution UMETA_EconomyData::GetTurfRewardsDistributionConfig(EMETA_TileWealth inWealth) {
    return FMETA_TurfRewardsDistribution{};
}

TMap<EMETA_TileReward, int32> UMETA_EconomyData::GetTurfRewardChances() {
    return TMap<EMETA_TileReward, int32>();
}

FMETA_FloatInterval UMETA_EconomyData::GetTurfIncomeMultiplier(EMETA_TileWealth inTileWealth) {
    return FMETA_FloatInterval{};
}

bool UMETA_EconomyData::GetTradeSettingsByRespectLvl(EMETA_RespectLvl inRespectLvl, FMETA_TradeSettings& outTradeSettings) {
    return false;
}

TMap<EMETA_RespectLvl, float> UMETA_EconomyData::GetTileRespectMultiplier() {
    return TMap<EMETA_RespectLvl, float>();
}

bool UMETA_EconomyData::GetSuitableEquipmentAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_CharacterTier inHeisterTier, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> inCurrentEquipments, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment) {
    return false;
}

float UMETA_EconomyData::GetStoryMissionRewardMultiplier() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetStartingChance() const {
    return 0;
}

FMETA_Interval UMETA_EconomyData::GetSoldiersPercentageForTurfReward() {
    return FMETA_Interval{};
}

float UMETA_EconomyData::GetRewardValueReductionMultiplierForRepeatedCapture() {
    return 0.0f;
}

float UMETA_EconomyData::GetRewardMultiplierForDifficulty(EIGS_ScenarioDifficulty inDifficulty) const {
    return 0.0f;
}

void UMETA_EconomyData::GetRandomizedUniqueCharacterCostsData(const UObject* inWCO, EIGS_CharacterID inCharacterID, int32& outUpkeepCost, int32& outHireCost) {
}

EMETA_ItemQuality UMETA_EconomyData::GetRandomizedQualityAccordingToPlayerRespect(const UObject* inWCO) {
    return EMETA_ItemQuality::None;
}

float UMETA_EconomyData::GetPriceMultiplierForFirstHeistersGeneration() const {
    return 0.0f;
}

TMap<EMETA_RespectLvl, FMETA_Interval> UMETA_EconomyData::GetPercentageBeStolenFromStash() const {
    return TMap<EMETA_RespectLvl, FMETA_Interval>();
}

float UMETA_EconomyData::GetNumberOfHPSegmentsForAutomaticRecovery() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetNumberOfBuyableAssets() const {
    return 0;
}

int32 UMETA_EconomyData::GetNassaraConversionCost(int32 inCountOfStars, EMETA_RespectLvl inRespectLvl) {
    return 0;
}

float UMETA_EconomyData::GetMultiplierOfExpensesForMissionsWithoutIntel(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

float UMETA_EconomyData::GetMultiplierOfExpensesForMissionsWithIntel(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

float UMETA_EconomyData::GetMultiplierOfExpensesForBigHeist(EMETA_RespectLvl inRespectLvl) const {
    return 0.0f;
}

float UMETA_EconomyData::GetMultiplierForHealing() const {
    return 0.0f;
}

FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios UMETA_EconomyData::GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(FGameplayTag inFGameplayTag) const {
    return FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios{};
}

float UMETA_EconomyData::GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl) {
    return 0.0f;
}

int32 UMETA_EconomyData::GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl) {
    return 0;
}

int32 UMETA_EconomyData::GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl) {
    return 0;
}

int32 UMETA_EconomyData::GetMinAmountOfEachLootCanBeStolen() const {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetLootMultiplierForTurfReward() {
    return FMETA_FloatInterval{};
}

FMETA_LevelUpUniqueHeisterData UMETA_EconomyData::GetLevelUpDataForUniqueHeisterByQuality(EMETA_CharacterTier inCharacterTier) {
    return FMETA_LevelUpUniqueHeisterData{};
}

FMETA_LevelUpGenericHeisterData UMETA_EconomyData::GetLevelUpDataForGenericHeisterByQuality(EMETA_CharacterTier inCharacterTier) {
    return FMETA_LevelUpGenericHeisterData{};
}

float UMETA_EconomyData::GetHeisterUpkeepMultiplierByEquipmentQuality(EMETA_ItemQuality inEquipmentQuality) const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetHeistersPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl) {
    return 0;
}

float UMETA_EconomyData::GetHeistersPoolRefreshMultipier() {
    return 0.0f;
}

int32 UMETA_EconomyData::GetHeistersAmountOverrideInFirstGeneration() const {
    return 0;
}

int32 UMETA_EconomyData::GetHeisterMarketCooldownInDays() const {
    return 0;
}

int32 UMETA_EconomyData::GetHeisterMarketAvailableInDays() const {
    return 0;
}

float UMETA_EconomyData::GetHealCostMultiplierForUniqueCharacter() const {
    return 0.0f;
}

float UMETA_EconomyData::GetHealCostMultiplierByHeisterTier(EMETA_CharacterTier inHeisterTier) const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetHealCostByRespectLevel(EMETA_RespectLvl inRespectLvl) const {
    return 0;
}

void UMETA_EconomyData::GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, FMETA_EconomyGraphVariableModeData& outData, bool& outSuccess) {
}

TArray<FMETA_CharacterInfo> UMETA_EconomyData::GetGenericHeistersPoolForBlackmarketWithOneFree(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks) {
    return TArray<FMETA_CharacterInfo>();
}

TArray<FMETA_CharacterInfo> UMETA_EconomyData::GetGenericHeistersPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks) {
    return TArray<FMETA_CharacterInfo>();
}

FMETA_HeisterRandomizedData UMETA_EconomyData::GetGenericHeisterRandomizedData(UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_CharacterTier inCharacterTier, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool& bSuccess) {
    return FMETA_HeisterRandomizedData{};
}

void UMETA_EconomyData::GetGenericHeisterEconomyData(EIGS_CharacterID inGenericCharacterID, EMETA_CharacterTier inCharacterTier, FMETA_HeisterEconomyData& outEconomyData, bool& bSuccess) const {
}

int32 UMETA_EconomyData::GetFrequencyOfIncomeValueRecompute() {
    return 0;
}

TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> UMETA_EconomyData::GetForbiddenPerksForUpgrade() {
    return TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>();
}

TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> UMETA_EconomyData::GetForbiddenPerksForFirstHeristerGeneraion() {
    return TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>();
}

void UMETA_EconomyData::GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const {
}

float UMETA_EconomyData::GetEquipmentCoefficientPriceForHeister() const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetDurationOfHealing() const {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetDefenceLostPenaltyInterval() {
    return FMETA_FloatInterval{};
}

int32 UMETA_EconomyData::GetDefaultProbabilitiesDataForCommonMissions() const {
    return 0;
}

int32 UMETA_EconomyData::GetDaysForRehabilitationAfterBankruptValue() {
    return 0;
}

int32 UMETA_EconomyData::GetDailyChanceIncrease() const {
    return 0;
}

float UMETA_EconomyData::GetCostModifierForInstantHealing() const {
    return 0.0f;
}

FMETA_MissionMonetaryValue UMETA_EconomyData::GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const {
    return FMETA_MissionMonetaryValue{};
}

int32 UMETA_EconomyData::GetChanceForTileIncomeToBeLoot() {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetCashMultiplierForTurfReward() {
    return FMETA_FloatInterval{};
}

float UMETA_EconomyData::GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const {
    return 0.0f;
}

int32 UMETA_EconomyData::GetBuyCostModifierByWeaponAttachmens(TArray<EIGS_ModType> inMods) const {
    return 0;
}

FMETA_BMEventWeaponData UMETA_EconomyData::GetBmEventWeaponInfoByBossRespect(UObject* inWCO, EMETA_RespectLvl inBossRespectLvl, bool& outSuccess) {
    return FMETA_BMEventWeaponData{};
}

int32 UMETA_EconomyData::GetBMEventLootSelectionExpiration() {
    return 0;
}

int32 UMETA_EconomyData::GetBMEventLootProposalsAmount() {
    return 0;
}

FMETA_FloatInterval UMETA_EconomyData::GetBMEventLootMonetaryValueMultiplier() {
    return FMETA_FloatInterval{};
}

int32 UMETA_EconomyData::GetBMEventLootCooldown() {
    return 0;
}

int32 UMETA_EconomyData::GetBankruptValue() const {
    return 0;
}

TArray<FMETA_Loan> UMETA_EconomyData::GetAvailableLoansByRespect(EMETA_RespectLvl inRespectLvl) {
    return TArray<FMETA_Loan>();
}

void UMETA_EconomyData::GetArmyTierData(EMETA_ArmyTier inTier, FMETA_ArmyTierConfiguration& OutInfo) const {
}

int32 UMETA_EconomyData::GetAmountOfPromotionPerksForUniqueCharacters() {
    return 0;
}

int32 UMETA_EconomyData::GetAmountOfPromotionEquipmentsForUniqueCharacters() {
    return 0;
}

TArray<EIGS_CharacterID> UMETA_EconomyData::GetAllSuitableGenericCharacterIdsByCharacterTier(EMETA_CharacterTier inCharacterTier) {
    return TArray<EIGS_CharacterID>();
}

TArray<EMETA_CharacterTier> UMETA_EconomyData::GetAllowedHeistersForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl) {
    return TArray<EMETA_CharacterTier>();
}

TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> UMETA_EconomyData::GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const {
    return TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration>();
}

FMETA_MissionAdditionalMonetaryValue UMETA_EconomyData::GetAdditionalWealthOfMission(const TSubclassOf<UMETA_MissionID>& inMission) const {
    return FMETA_MissionAdditionalMonetaryValue{};
}

FMETA_CharacterInfo UMETA_EconomyData::GenerateGenericHeisterByPlayerRespectWithHireValue(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool inIsFree, bool& outSuccess) {
    return FMETA_CharacterInfo{};
}

FMETA_CharacterInfo UMETA_EconomyData::GenerateGenericHeisterByPlayerRespect(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool& outSuccess) {
    return FMETA_CharacterInfo{};
}

FMETA_CharacterInfo UMETA_EconomyData::GenerateGenericHeisterByIdAndTier(UObject* inWCO, EIGS_CharacterID inGenericHeisterID, EMETA_CharacterTier inGenericHeisterTier, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool& outSuccess) {
    return FMETA_CharacterInfo{};
}

void UMETA_EconomyData::CalculateArmyUpkeepCost(EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyUpkeepCost) const {
}

void UMETA_EconomyData::CalculateArmyCostForDefense(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost) {
}

void UMETA_EconomyData::CalculateArmyCostForAttack(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost) {
}


