#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_SquadBase.h"
#include "BTDecorator_SquadFastBreach.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_SquadFastBreach : public UBTDecorator_SquadBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastBreachAllowedTime;
    
    UBTDecorator_SquadFastBreach();

};

