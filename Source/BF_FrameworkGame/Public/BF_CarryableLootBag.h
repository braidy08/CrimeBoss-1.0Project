#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableBase.h"
#include "BF_CarryableLootBag.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class BF_FRAMEWORKGAME_API ADEPRECATED_BF_CarryableLootBag : public AIGS_CarryableBase {
    GENERATED_BODY()
public:
    ADEPRECATED_BF_CarryableLootBag(const FObjectInitializer& ObjectInitializer);

};

