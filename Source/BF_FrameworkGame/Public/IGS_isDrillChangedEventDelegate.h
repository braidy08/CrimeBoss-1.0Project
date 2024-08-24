#pragma once
#include "CoreMinimal.h"
#include "IGS_isDrillChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_isDrillChangedEvent, bool, inIsDrill);

