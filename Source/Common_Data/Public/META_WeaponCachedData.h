#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_WeaponCachedData.generated.h"

class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> Weapon;
    
    FMETA_WeaponCachedData();
};

