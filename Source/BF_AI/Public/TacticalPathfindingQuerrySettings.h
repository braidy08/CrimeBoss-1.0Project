#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TacticalPathfindingQuerrySettings.generated.h"

class AIGS_SquadBase;

UCLASS(Blueprintable)
class BF_AI_API UTacticalPathfindingQuerrySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SquadBase* Squad;
    
    UTacticalPathfindingQuerrySettings();

};

