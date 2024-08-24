#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackShielderCharacter.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API APaybackShielderCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackShielderCharacter(const FObjectInitializer& ObjectInitializer);

};

