#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ArmsMaskHandlerComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ArmsMaskHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MaskEquipMontage;
    
    UIGS_ArmsMaskHandlerComponent(const FObjectInitializer& ObjectInitializer);

};

