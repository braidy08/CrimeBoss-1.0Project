#pragma once
#include "CoreMinimal.h"
#include "IGS_NavlinkTransitionBase.h"
#include "IGS_NavlinkJumpTransition.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_NavlinkJumpTransition : public UIGS_NavlinkTransitionBase {
    GENERATED_BODY()
public:
    UIGS_NavlinkJumpTransition();

};

