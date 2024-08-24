#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentBase.h"
#include "IGS_AnimatedInteractiveComponentProgress.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentProgress : public UIGS_AnimatedInteractiveComponentBase {
    GENERATED_BODY()
public:
    UIGS_AnimatedInteractiveComponentProgress(const FObjectInitializer& ObjectInitializer);

};

