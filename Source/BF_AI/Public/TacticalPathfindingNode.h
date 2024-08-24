#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TacticalPathfindingNode.generated.h"

class UTacticalPathfindingEdge;
class UTacticalPathfindingNode;

UCLASS(Abstract, Blueprintable)
class BF_AI_API UTacticalPathfindingNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTacticalPathfindingNode*, UTacticalPathfindingEdge*> Edges;
    
    UTacticalPathfindingNode();

};

