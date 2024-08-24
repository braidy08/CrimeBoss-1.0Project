#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentBase.h"
#include "IGS_AnimatedInteractiveComponentLoop.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentLoop : public UIGS_AnimatedInteractiveComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ObjectAnimation;
    
    UIGS_AnimatedInteractiveComponentLoop(const FObjectInitializer& ObjectInitializer);

};

