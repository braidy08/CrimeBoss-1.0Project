#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetFocusableSliderBlueprintEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetFocusableSliderBlueprintEventSignature, float, InValue);

