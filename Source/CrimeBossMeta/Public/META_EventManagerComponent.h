#pragma once
#include "CoreMinimal.h"
#include "META_GoalSave.h"
#include "META_GraphNodeSave.h"
#include "META_LoopBranchNodeSaveData.h"
#include "META_TimerNodeSaveData.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterState.h"
#include "EMETA_EventTime.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_GraphStatus.h"
#include "META_CharacterID.h"
#include "META_HeistersOnEvent.h"
#include "META_EventsManager.h"
#include "META_GraphStruct.h"
#include "META_GraphVariableChangeDelegate.h"
#include "META_EventManagerComponent.generated.h"

class UGenericGraph;
class UGenericGraphNode;
class UMETA_BaseStoryGraph;
class UMETA_Graph;
class UMETA_StoryGraph;
class UMETA_TaskCondition;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_EventManagerComponent : public UActorComponent, public IMETA_EventsManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GraphVariableChange OnGraphVariableChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_HeistersOnEvent> HeistersOnEvent;
    
public:
    UMETA_EventManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasGraphStarted(const FMETA_GraphStruct& inGraphData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TrySetSubGraphResult(const TSoftObjectPtr<UGenericGraph>& ParentGraph, const TSoftObjectPtr<UMETA_StoryGraph>& SubGraph, EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_GraphStatus ToggleGraph(const TSoftObjectPtr<UGenericGraph>& Graph, EMETA_GraphStatus NewStatus, bool bNeedExecute);
    
    UFUNCTION(BlueprintCallable)
    bool SwapCurrentNodeIds(UPARAM(Ref) FMETA_GraphStruct& inGraphData, int32 inOriginNodeId, int32 inTargetNodeId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetParentGraphByStoryGraph(const TSoftObjectPtr<UMETA_BaseStoryGraph>& inGraph, const TSoftObjectPtr<UMETA_BaseStoryGraph>& inParentGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGraphVarValue(FGameplayTag inVarTag, int32 inNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGraphResult(const TSoftObjectPtr<UMETA_StoryGraph>& Graph, EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveParentGraphByStoryGraph(const TSoftObjectPtr<UMETA_BaseStoryGraph>& inGraph);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNodeFromCurrentNodes(UPARAM(Ref) FMETA_GraphStruct& inGraphData, int32 inNodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveHeisterFromEvent(FGameplayTag inEventTag, FMETA_CharacterID inHeisterID, EMETA_CharacterState inNewState, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllHeistersFromEvent(FGameplayTag inEventTag, EMETA_CharacterState inNewState, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void MoveGraphToNode(UPARAM(Ref) FMETA_GraphStruct& inGraphData, int32 inOriginNodeId, int32 inTargetNodeId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadTasksByGoalSave(UPARAM(Ref) FMETA_GoalSave& inGoalSave, TArray<UMETA_TaskCondition*>& Tasks, TArray<UMETA_TaskCondition*>& FinishedInnerTasks);
    
    UFUNCTION(BlueprintCallable)
    void GetUnfinishedInnerGraphsByGraph(const TSoftObjectPtr<UMETA_StoryGraph>& inGraph, TArray<TSoftObjectPtr<UMETA_StoryGraph>>& outGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetTimerNodesSaveData(const FMETA_GraphNodeSave& inNodeID, FMETA_TimerNodeSaveData& TimerData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetPersistentVarValue(FGameplayTag inVarTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UMETA_BaseStoryGraph> GetParentGraphByStoryGraph(const TSoftObjectPtr<UMETA_BaseStoryGraph>& inGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMETA_Graph* GetMasterGraphNodeByStoryGraph(UGenericGraph* Graph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_Graph* GetMasterGraphNodeByGenericGraph(UGenericGraph* inGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetLoopBranchNodesSaveData(const FMETA_GraphNodeSave& inNodeID, FMETA_LoopBranchNodeSaveData& LoopBranchData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMETA_CharacterID GetHeisterFromEvent(FGameplayTag inEventTag, int32 inHeisterIndex, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetGraphVarValue(FGameplayTag inVarTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UMETA_BaseStoryGraph> GetGoalGraphByNode(const UGenericGraphNode* inNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftObjectPtr<UMETA_BaseStoryGraph> GetGoalGraphByGraph(const TSoftObjectPtr<UMETA_BaseStoryGraph>& inGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_EventTime GetEventTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_CharacterID> GetAllHeistersFromEvent(FGameplayTag inEventTag, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentNodes(UPARAM(Ref) FMETA_GraphStruct& inGraphData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeGraphVarValue(FGameplayTag inVarTag, int32 inChangeByValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGraphBeExecutedFromBeginning(const FMETA_GraphStruct& inGraphData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddHeisterToEvent(FGameplayTag inEventTag, const FMETA_CharacterID inCharacterID, bool inUseInternalCheckForState);
    

    // Fix for true pure virtual functions not being implemented
};

