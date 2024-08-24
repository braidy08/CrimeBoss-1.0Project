#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "GameFramework/Actor.h"
#include "IGS_MenuSlotBase.generated.h"

class APlayerState;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_MenuSlotBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_MenuSlotBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerHeisterData(APlayerState* inPlayerState, const FCommonHeisterData& inHeisterData);
    
};

