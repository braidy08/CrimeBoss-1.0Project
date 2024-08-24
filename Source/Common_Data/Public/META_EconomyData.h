#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_CharacterTier.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TileReward.h"
#include "EMETA_TileWealth.h"
#include "META_BMEventWeaponData.h"
#include "META_EconomyGraphVariableModeData.h"
#include "META_FloatInterval.h"
#include "META_Interval.h"
#include "META_WeaponTurfReward.h"
#include "EIGS_ModType.h"
#include "IGS_CharacterTableRow.h"
#include "META_AllowedHeistersInBM_Config.h"
#include "META_AllowedWeaponsInfo.h"
#include "META_ArmyTierConfiguration.h"
#include "META_CategoryEconomyVariable.h"
#include "META_CharacterInfo.h"
#include "META_EquipmentEconomyData.h"
#include "META_EquipmentPriceIntervalsPerQuality.h"
#include "META_HeisterDataByTier.h"
#include "META_HeisterEconomyData.h"
#include "META_HeisterPerksDataByTier.h"
#include "META_HeisterRandomizedData.h"
#include "META_LevelUpGenericHeisterData.h"
#include "META_LevelUpUniqueHeisterData.h"
#include "META_Loan.h"
#include "META_Loans.h"
#include "META_MissionAdditionalMonetaryValue.h"
#include "META_MissionMonetaryValue.h"
#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.h"
#include "META_PerkData.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.h"
#include "META_TradeSettings.h"
#include "META_TurfRewardsDistribution.h"
#include "META_UniqueCharacterCostsData.h"
#include "META_WarehouseWealthData.h"
#include "META_WeaponEconomyData.h"
#include "META_WeaponScopeKey.h"
#include "META_WeaponsArrayCached.h"
#include "Templates/SubclassOf.h"
#include "META_EconomyData.generated.h"

class UIGS_EquipmentInventoryObject;
class UIGS_GameplayEffect_PerkBase;
class UMETA_CommonData;
class UMETA_MissionID;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_EconomyData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_HeisterDataByTier> SetupHeisterDataPerGenericCharacterAndQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_HeisterPerksDataByTier> SetupHeisterPerksPerTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_UniqueCharacterCostsData BasicUniqueCharacterCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterCostsData> UniqueCharacterCostsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval MissionsCutForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_Interval> MissionsCutOverrideForUniqueCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_CharacterTier, FMETA_LevelUpGenericHeisterData> LevelUpDataForGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_CharacterTier, FMETA_LevelUpUniqueHeisterData> LevelUpDataForUniqueHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> ForbiddenPerksForFirstHeristerGeneraion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval ReduceHirePriceByPercentForEachBadPerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceRegenerateAllPerksIfTheyAreNegative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_WeaponEconomyData> SetupWeaponDataPerWeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> BuyCostModifierByWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ModType, int32> BuyCostModifierByWeaponAttachmens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, FMETA_EquipmentPriceIntervalsPerQuality> SetupEquipmentDataPerEquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, float> HeisterUpkeepMultiplierPerEquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_MissionMonetaryValue> MissionsCommonWealthConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_MissionID>, FMETA_MissionAdditionalMonetaryValue> MissionsAdditionalWealthConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMoneyMakingScenariosProbabilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, float> RewardMultipliersForDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoryMissionRewardMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailNassaraExpenses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor1stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor2stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NassaraExpensesFor3stStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_TradeSettings> TradeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponCoefficientPriceForHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentCoefficientPriceForHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterMarketAvailableInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeisterMarketCooldownInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriceMultiplierForFirstGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeistersAmountOverrideInFirstGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedHeistersInBM_Config> AllowedHeistersPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeistersPoolRefreshCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeistersPoolRefreshStartPriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMarketAvailableInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponMarketCooldownInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponsPoolRefreshStartPriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_AllowedWeaponsInfo> AllowedWeaponsPerRespectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponsPoolRefreshCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ArmyTier, FMETA_ArmyTierConfiguration> ArmyTiersConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval DefenceLostPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, float> TileRespectMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceForTileIncomeToBeLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrequencyOfIncomeValueRecompute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TileWealth, FMETA_FloatInterval> TurfIncomeMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TileReward, int32> TurfRewardChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_TileWealth, FMETA_TurfRewardsDistribution> TurfRewardsDistributionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SoldiersPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval LootMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval CashMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_WeaponTurfReward WeaponReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_WeaponTurfReward WeaponRewardForRepeatedCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardValueReductionMultiplierForRepeatedCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberOfHPSegmentsForAutomaticRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplierForHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, int32> HealCostPerRespectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_CharacterTier, float> HealCostMultiplierPerHeisterTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealCostMultiplierForUniqueCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostModifierForInstantHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationOfHealing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_Loans> Loans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysForRehabilitationAfterBankruptValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BankruptValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMETA_CategoryEconomyVariable> GraphEconomyCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBuyableAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_BMEventWeaponData> BM_WeaponInfoPerBossRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BM_LootEventCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BM_LootProposalsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BM_LootEventSelectionExpiration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval BM_LootEventMonetaryValueMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WarehouseAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> WarehouseWealthPerRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_Interval> PercentageBeStolenFromStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyChanceIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAmountOfEachLootCanBeStolen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_WeaponScopeKey, FMETA_WeaponsArrayCached> WeaponsCachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_EquipmentEconomyData EquipmentEconomyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_CommonData* CommonData;
    
public:
    UMETA_EconomyData();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponsCachedData(const UObject* inWCO);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetCharacterPoolNames(const UObject* inWCO, UPARAM(Ref) TArray<FMETA_CharacterInfo>& inGeneratedPool);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshCommonData(const UObject* inWCO);
    
public:
    UFUNCTION(BlueprintCallable)
    void RandomizePerksByIDAndTier(const UObject* inWCO, EIGS_CharacterID inID, EMETA_CharacterTier inHeisterTier, bool bIsLevelUp, const int32 inAmountOfEquipment, const TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>>& inForbiddenPerks, const TArray<FMETA_PerkData>& inCurrentPerks, TArray<FMETA_PerkData>& outRandomizedPerks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoneyMakingScenariosAdditionalWealthAndProbabilitiesContainData(FGameplayTag inFGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_WeaponTurfReward GetWeaponTurfRewardForRepeatedCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_WeaponTurfReward GetWeaponTurfReward();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeaponsPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable)
    float GetWeaponsPoolRefreshMultiplier();
    
    UFUNCTION(BlueprintCallable)
    TMap<UMETA_Weapon*, int32> GetWeaponsPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> GetWeaponsByClassAndQuality(const UObject* inWCO, FGameplayTag inWeaponClass, EMETA_ItemQuality inQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponPrice(FGameplayTag inWeaponClassTag, EMETA_ItemQuality inWeaponQuality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponMarketCooldownInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponMarketAvailableInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponEconomyDataByQuality(EMETA_ItemQuality inWeaponQuality, FMETA_WeaponEconomyData& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponCoefficientPriceForHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_RespectLvl, FMETA_WarehouseWealthData> GetWarehouseWealthPerRespect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWarehouseAttackCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniqueCharacterMissionCut(EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfRewardsDistribution GetTurfRewardsDistributionConfig(EMETA_TileWealth inWealth);
    
    UFUNCTION(BlueprintCallable)
    TMap<EMETA_TileReward, int32> GetTurfRewardChances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetTurfIncomeMultiplier(EMETA_TileWealth inTileWealth);
    
    UFUNCTION(BlueprintCallable)
    bool GetTradeSettingsByRespectLvl(EMETA_RespectLvl inRespectLvl, FMETA_TradeSettings& outTradeSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_RespectLvl, float> GetTileRespectMultiplier();
    
    UFUNCTION(BlueprintCallable)
    bool GetSuitableEquipmentAfterHeisterUpgrade(const UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_CharacterTier inHeisterTier, const FMETA_HeisterEconomyData inEconomyData, TArray<FMETA_PerkData> inCurrentPerks, TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> inCurrentEquipments, TSubclassOf<UIGS_EquipmentInventoryObject>& outEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStoryMissionRewardMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetSoldiersPercentageForTurfReward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardValueReductionMultiplierForRepeatedCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardMultiplierForDifficulty(EIGS_ScenarioDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRandomizedUniqueCharacterCostsData(const UObject* inWCO, EIGS_CharacterID inCharacterID, int32& outUpkeepCost, int32& outHireCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetRandomizedQualityAccordingToPlayerRespect(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriceMultiplierForFirstHeistersGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_RespectLvl, FMETA_Interval> GetPercentageBeStolenFromStash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNumberOfHPSegmentsForAutomaticRecovery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfBuyableAssets() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNassaraConversionCost(int32 inCountOfStars, EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierOfExpensesForMissionsWithoutIntel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierOfExpensesForMissionsWithIntel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierOfExpensesForBigHeist(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultiplierForHealing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios GetMoneyMakingScenariosAdditionalWealthAndProbabilitiesData(FGameplayTag inFGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionObjectiveMonetaryValue(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionMaxMonetaryValue(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionAverageMonetaryValue(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinAmountOfEachLootCanBeStolen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetLootMultiplierForTurfReward();
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpUniqueHeisterData GetLevelUpDataForUniqueHeisterByQuality(EMETA_CharacterTier inCharacterTier);
    
    UFUNCTION(BlueprintCallable)
    FMETA_LevelUpGenericHeisterData GetLevelUpDataForGenericHeisterByQuality(EMETA_CharacterTier inCharacterTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeisterUpkeepMultiplierByEquipmentQuality(EMETA_ItemQuality inEquipmentQuality) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeistersPoolRefreshStartPrice(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable)
    float GetHeistersPoolRefreshMultipier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeistersAmountOverrideInFirstGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeisterMarketCooldownInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeisterMarketAvailableInDays() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealCostMultiplierForUniqueCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealCostMultiplierByHeisterTier(EMETA_CharacterTier inHeisterTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealCostByRespectLevel(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable)
    void GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, FMETA_EconomyGraphVariableModeData& outData, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_CharacterInfo> GetGenericHeistersPoolForBlackmarketWithOneFree(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_CharacterInfo> GetGenericHeistersPoolForBlackmarket(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterRandomizedData GetGenericHeisterRandomizedData(UObject* inWCO, const FIGS_CharacterTableRow& inGenericTableRow, EMETA_CharacterTier inCharacterTier, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGenericHeisterEconomyData(EIGS_CharacterID inGenericCharacterID, EMETA_CharacterTier inCharacterTier, FMETA_HeisterEconomyData& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrequencyOfIncomeValueRecompute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForUpgrade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> GetForbiddenPerksForFirstHeristerGeneraion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquipmentEconomyDataByQuality(EMETA_ItemQuality inEquipmentQuality, FMETA_EquipmentPriceIntervalsPerQuality& outEconomyData, bool& bSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEquipmentCoefficientPriceForHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDurationOfHealing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetDefenceLostPenaltyInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultProbabilitiesDataForCommonMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysForRehabilitationAfterBankruptValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDailyChanceIncrease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCostModifierForInstantHealing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_MissionMonetaryValue GetCommonWealthOfMission(EMETA_RespectLvl inRespectLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceForTileIncomeToBeLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetCashMultiplierForTurfReward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuyCostModifierByWeaponClass(FGameplayTag inWeaponClassTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuyCostModifierByWeaponAttachmens(TArray<EIGS_ModType> inMods) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_BMEventWeaponData GetBmEventWeaponInfoByBossRespect(UObject* inWCO, EMETA_RespectLvl inBossRespectLvl, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBMEventLootSelectionExpiration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBMEventLootProposalsAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FloatInterval GetBMEventLootMonetaryValueMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBMEventLootCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBankruptValue() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMETA_Loan> GetAvailableLoansByRespect(EMETA_RespectLvl inRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArmyTierData(EMETA_ArmyTier inTier, FMETA_ArmyTierConfiguration& OutInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfPromotionPerksForUniqueCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfPromotionEquipmentsForUniqueCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_CharacterID> GetAllSuitableGenericCharacterIdsByCharacterTier(EMETA_CharacterTier inCharacterTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_CharacterTier> GetAllowedHeistersForRespectLvl(EMETA_RespectLvl inCurrentRespectLvl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration> GetAllMoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_MissionAdditionalMonetaryValue GetAdditionalWealthOfMission(const TSubclassOf<UMETA_MissionID>& inMission) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_CharacterInfo GenerateGenericHeisterByPlayerRespectWithHireValue(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool inIsFree, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    FMETA_CharacterInfo GenerateGenericHeisterByPlayerRespect(UObject* inWCO, EMETA_RespectLvl inCurrentBossStatus, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    FMETA_CharacterInfo GenerateGenericHeisterByIdAndTier(UObject* inWCO, EIGS_CharacterID inGenericHeisterID, EMETA_CharacterTier inGenericHeisterTier, TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> inForbiddenPerks, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateArmyUpkeepCost(EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyUpkeepCost) const;
    
    UFUNCTION(BlueprintCallable)
    void CalculateArmyCostForDefense(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost);
    
    UFUNCTION(BlueprintCallable)
    void CalculateArmyCostForAttack(const UObject* inWCO, EMETA_ArmyTier inTier, int32 inSoldiersAmount, int32& outArmyCost);
    
};

