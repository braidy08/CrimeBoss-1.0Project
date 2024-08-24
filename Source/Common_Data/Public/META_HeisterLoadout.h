#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_HeisterLoadout.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_Weapon* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> PrimaryWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_Weapon* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> SecondaryWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_EquipmentInventoryObject> SelectedEquipment;
    
    FMETA_HeisterLoadout();
};

