#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_BaseNode_SG.h"
#include "META_SubGraphNode_SG.generated.h"

class UMETA_StoryGraph;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_SubGraphNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_StoryGraph> SubGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrueNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FalseNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_StoryGraph* LoadedSubGraph;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GoalStatus Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldConnectionsCount;
    
public:
    UMETA_SubGraphNode_SG();

    UFUNCTION(BlueprintCallable)
    void SetSubGraphResult(EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextNodeIDByResult();
    
};

