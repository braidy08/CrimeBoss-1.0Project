#pragma once
#include "CoreMinimal.h"
#include "META_WeaponSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_WeaponSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalPercentageOfWeaponPrice;
    
    PAYBACKDEFINITIONS_API FMETA_WeaponSaveData();
};

