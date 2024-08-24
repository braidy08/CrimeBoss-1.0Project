#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_OpenLootHolder.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_OpenLootHolder : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BestLootingCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WaitForBashHitsHandled;
    
public:
    UIGS_BTTask_OpenLootHolder();

};

