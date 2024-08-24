#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateMenuBase.h"
#include "IGS_Quickplay_GameState.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_Quickplay_GameState : public AIGS_GameStateMenuBase {
    GENERATED_BODY()
public:
    AIGS_Quickplay_GameState(const FObjectInitializer& ObjectInitializer);

};

