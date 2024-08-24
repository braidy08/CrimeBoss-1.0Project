#pragma once
#include "CoreMinimal.h"
#include "IGS_CareerSaveDataRequestedNativeDelegateDelegate.generated.h"

class UIGS_PaybackSaveGameCareer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CareerSaveDataRequestedNativeDelegate, UIGS_PaybackSaveGameCareer*, inSaveGameCareer);

