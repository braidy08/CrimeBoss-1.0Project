#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerGame.h"
#include "IGS_AIControllerScout.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_AIControllerScout : public AIGS_AIControllerGame {
    GENERATED_BODY()
public:
    AIGS_AIControllerScout(const FObjectInitializer& ObjectInitializer);

};

