#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_SubControllerCommon.h"
#include "IGS_SubControllerHuman.generated.h"

class ACharacter;
class UIGS_AnalogControllerSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIGS_SubControllerHuman : public UIGS_SubControllerCommon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AnalogControllerSettings* ControllerSettings;
    
public:
    UIGS_SubControllerHuman(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnUse_SERVER(bool inIsHolding);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);
    
};

