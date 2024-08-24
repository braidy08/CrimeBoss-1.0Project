#pragma once
#include "CoreMinimal.h"
#include "META_PerkDataToFPS.h"
#include "Templates/SubclassOf.h"
#include "CommonHeisterLoadout.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonHeisterLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkDataToFPS> Perks;
    
    FCommonHeisterLoadout();
};

