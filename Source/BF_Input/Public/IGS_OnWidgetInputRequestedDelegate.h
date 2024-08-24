#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "IGS_OnWidgetInputRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnWidgetInputRequested, EIGS_InputAction, inInputAction);

