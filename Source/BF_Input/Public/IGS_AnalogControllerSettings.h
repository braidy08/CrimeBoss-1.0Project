#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AnalogControllerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BF_INPUT_API UIGS_AnalogControllerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightStickExponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSensitivityRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSensitivityRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensitivityStepSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinADSMultiplierRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxADSMultiplierRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserADSMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseADSMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistSlowdownStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistSlowdownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistSlowdownMultiplierADS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimSnappingEnabled;
    
public:
    UIGS_AnalogControllerSettings();

};

