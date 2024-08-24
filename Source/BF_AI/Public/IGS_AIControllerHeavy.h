#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerHeavy.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerHeavy : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerHeavy(const FObjectInitializer& ObjectInitializer);

};

