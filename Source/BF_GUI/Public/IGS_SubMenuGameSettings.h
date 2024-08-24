#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSubMenuSettingsBase.h"
#include "IGS_SubMenuGameSettings.generated.h"

class UIGS_WidgetFocusableSlider;
class UIGS_WidgetFocusableSpinBox;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_SubMenuGameSettings : public UIGS_WidgetSubMenuSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetFocusableSpinBox* LanguagePickerSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetFocusableSpinBox* DialoguesLimitSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetFocusableSpinBox* SubtitlesEnabledSpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetFocusableSpinBox* ColorVisionDeficiencySpinBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetFocusableSlider* ColorVisionDeficiencySeveritySlider;
    
    UIGS_SubMenuGameSettings();

};

