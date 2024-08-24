#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsBase.h"
#include "IGS_ControllerSettings.generated.h"

class UIGS_ControllerSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BF_SETTINGS_API UIGS_ControllerSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertedVerticalLook;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistSlowdownStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLinearControllerCurve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPrioritizeUseInsteadOfReload;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAimSnapping;
    
    UIGS_ControllerSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_ControllerSettings* Instance();
    
};

