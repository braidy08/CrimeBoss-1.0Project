#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_SkinTableRow.h"
#include "IGS_SkinDatabase.generated.h"

class UIGS_SkinData;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_SkinDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_SkinDatabase();

    UFUNCTION(BlueprintCallable)
    static FIGS_SkinTableRow GetDataSkin(UObject* inWCO, const TSoftObjectPtr<UIGS_SkinData>& inClass, bool& outSucceeded);
    
};

