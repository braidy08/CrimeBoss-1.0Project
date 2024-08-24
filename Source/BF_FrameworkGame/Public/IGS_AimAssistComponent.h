#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AimAssistComponent.generated.h"

class UIGS_AnalogControllerSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AimAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSnapSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AnalogControllerSettings* ControllerSettings;
    
public:
    UIGS_AimAssistComponent(const FObjectInitializer& ObjectInitializer);

};

