#pragma once
#include "CoreMinimal.h"
#include "META_PreviousMissionData.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EMETA_AmbushStartMethod.h"
#include "EMETA_ObjectiveState.h"
#include "EMETA_TradeVendor.h"
#include "EMETA_JobForceResult.h"
#include "EMETA_JobStartRejectionReason.h"
#include "Templates/SubclassOf.h"
#include "META_JobsManager.generated.h"

class UMETA_BaseGoal;
class UMETA_BaseMission;
class UMETA_Character;
class UMETA_MissionID;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_JobsManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_JobsManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartCurrentJob(EMETA_JobForceResult inExpectedResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAmbush(TSubclassOf<UMETA_MissionID> inAmbushMissionID, EMETA_AmbushStartMethod inStartMethod, FMETA_PreviousMissionData inPreviousMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCurrentJob(UMETA_BaseMission* inMetaMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAmountOfSoldiersForIntelMission(int32 inAmount, bool& WasSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectIntelGatheringMissionByInstigator(UMETA_BaseMission* inInstigatorMissionID, bool& WasSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetCurrentJob();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveCharacterFromCurrentJob(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsThereJobAboutToExpire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCurrentJobValid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitTradeDealSell(EMETA_TradeVendor inVendor, FGameplayTag inLootTag, int32 inLootAmount, bool& WasCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPoliceAmbushChance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetObjectivesResult(UMETA_BaseMission* inMissionID, EMETA_ObjectiveState& outMissionSuccess, EMETA_ObjectiveState& outCleanExecution, EMETA_ObjectiveState& outBonusObjective);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_Character* GetHeisterBeingRescuedOnMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_BaseGoal* GetGoalRelatedToMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetGangsAmbushChance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDayOfSpawn(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_BaseMission* GetCurrentJobInfo(bool& outValid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseMission*> GetAllJobs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoGatheringIntelForCurrentJob();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_BaseMission* DEBUG_CreateMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCharactersFromCurrentJob(TArray<UMETA_Character*>& outAssignedCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanMissionHaveObjectives(UMETA_BaseMission* inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanJobBeStarted(UMETA_BaseMission* inMetaMission, EMETA_JobStartRejectionReason& outRejectionReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddJob(UMETA_BaseMission* NewJob, TSubclassOf<UMETA_BaseGoal> inGoalID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddCharacterToCurrentJob(UMETA_Character* inCharacter);
    
};

