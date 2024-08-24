#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_HeisterLoadoutSave.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_HeisterLoadoutSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;
    
    FMETA_HeisterLoadoutSave();
};

