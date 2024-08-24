#pragma once
#include "CoreMinimal.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "META_StatisticNoteSaveData.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "EMETA_StatisticsHeisterState.h"
#include "META_CharacterID.h"
#include "META_HeisterStatisticData.h"
#include "META_StatisticsManager.h"
#include "Templates/SubclassOf.h"
#include "META_StatisticsManagerComponent.generated.h"

class UMETA_BaseGoal;
class UMETA_BaseMission;
class UMETA_BaseStoryGraph;
class UMETA_BossLevelData;
class UMETA_Character;
class UMETA_Weapon;
class UMapTile;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_StatisticsManagerComponent : public UActorComponent, public IMETA_StatisticsManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_StatisticNoteSaveData> Statistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_civilians_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_gangsters_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_police_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag killed_swat_tag;
    
public:
    UMETA_StatisticsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStatisticFromLoad(TMap<int32, FMETA_StatisticNoteSaveData> inStatistic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAssetFromStatistic(FGameplayTag InAsset);
    
    UFUNCTION(BlueprintCallable)
    void InitStatisticCurrentDay(int32 inDay);
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, FMETA_StatisticNoteSaveData> GetStatisticForSave();
    
    UFUNCTION(BlueprintCallable)
    FMETA_StatisticNoteSaveData GetStatisticForInteraval(int32 inStartDay, int32 inEndDay);
    
    UFUNCTION(BlueprintCallable)
    FMETA_StatisticNoteSaveData GetStatisticByDay(int32 inDay);
    
    UFUNCTION(BlueprintCallable)
    FMETA_StatisticNoteSaveData GetFullStatistic();
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponBoughtToStatistic(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable)
    void AddTurfMissionToStatistic(UMETA_BaseMission* inMission, FIGS_FPS2Meta_Data inFPSData, FIGS_SharedMetaTransfer_Data inShareData, EMETA_Gang inTargetGang);
    
    UFUNCTION(BlueprintCallable)
    void AddTurfMissionSoldersCasualtiesToStatistic(int32 inSoldersCasualties);
    
    UFUNCTION(BlueprintCallable)
    void AddTradeMissionToStatistic(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable)
    void AddStateToHeister(FMETA_CharacterID inID, EMETA_StatisticsHeisterState inState);
    
    UFUNCTION(BlueprintCallable)
    void AddRecruitedTurfWarSoldiersToStatistic(int32 inAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddMoneyChangesToStatistic(int32 inStartMoney, int32 inEndMoney);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionDataToStatistic(UMETA_BaseMission* inMission, TMap<FGameplayTag, int32> inFPSData, FIGS_FPS2Meta_Data inFPSEconomyData, FIGS_SharedMetaTransfer_Data inShareData, int32 inCountOfStars);
    
    UFUNCTION(BlueprintCallable)
    void AddLostMoneyAndLootAfterWarehouseToStatistic(int32 inLostMoney, TMap<FGameplayTag, int32> inLostLoot);
    
    UFUNCTION(BlueprintCallable)
    void AddLootChangesToStatistic(FGameplayTag inLoot, int32 inAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddIsolatedTurfdToStatistic(UMapTile* inTile);
    
    UFUNCTION(BlueprintCallable)
    void AddHiredArmyForTurfToStatistic(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterStatisticData AddHeisterToStatistic(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalToStatistic(TSubclassOf<UMETA_BaseGoal> inGoal, EMETA_GoalStatus inGoalStatus);
    
    UFUNCTION(BlueprintCallable)
    void AddFinishedPlotlineToStatistic(TSoftObjectPtr<UMETA_BaseStoryGraph> inGraphs);
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyBossEliminatedToStatistic(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void AddDay(int32 inDay);
    
    UFUNCTION(BlueprintCallable)
    void AddCampaignCompleteDataToStatistic(EMETA_CareerCompletionReason inReason, int32 inScore);
    
    UFUNCTION(BlueprintCallable)
    void AddBossDataToStatistic(UMETA_BossLevelData* inBossData);
    
    UFUNCTION(BlueprintCallable)
    void AddBankruptcyDataToStatistic(bool inBankruptcy);
    
    UFUNCTION(BlueprintCallable)
    void AddAssetToStatistic(FGameplayTag InAsset, EMETA_PlotlineAssetAvailability inAvailability);
    

    // Fix for true pure virtual functions not being implemented
};

