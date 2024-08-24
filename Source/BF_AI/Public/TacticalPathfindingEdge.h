#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TacticalPathfindingEdge.generated.h"

class UTacticalPathfindingNode;

UCLASS(Blueprintable)
class BF_AI_API UTacticalPathfindingEdge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTacticalPathfindingNode* FromNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTacticalPathfindingNode* ToNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTacticalPathfindingNode*> TresspasingNodes;
    
    UTacticalPathfindingEdge();

};

