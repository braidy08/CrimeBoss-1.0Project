#pragma once
#include "CoreMinimal.h"
#include "Rendering/RenderingCommon.h"
#include "IGS_SettingsBase.h"
#include "IGS_GameSettings.generated.h"

class UIGS_GameSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class BF_SETTINGS_API UIGS_GameSettings : public UIGS_SettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyMainDialogues;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabledValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency ColorVisionDeficiencyType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorVisionDeficiencySeverity;
    
    UIGS_GameSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_GameSettings* Instance();
    
};

