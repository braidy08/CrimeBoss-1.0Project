#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDirectionalPlayerCueSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDirectionalPlayerCueSignature, const AActor*, inSourceActor);

