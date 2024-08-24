#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_InputThumbstickType.h"
#include "IGS_OnAnalogInputEventRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnAnalogInputEventRequested, EIGS_InputThumbstickType, Type, FVector2D, Value);

