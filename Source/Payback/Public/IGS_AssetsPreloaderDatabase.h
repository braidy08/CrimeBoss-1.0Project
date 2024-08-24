#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_AssetsPreloaderTableRow.h"
#include "IGS_AssetsPreloaderDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_AssetsPreloaderDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_AssetsPreloaderDatabase();

    UFUNCTION(BlueprintCallable)
    static FIGS_AssetsPreloaderTableRow GetDataSkin(UObject* inWCO, const FGameplayTag& inID, bool& outSucceeded);
    
};

