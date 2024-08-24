#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_ItemPropertyFlags.h"
#include "EIGS_ItemType.h"
#include "EIGS_PerkCategory.h"
#include "EIGS_PerkClass.h"
#include "IGS_CarryableTableRow.h"
#include "IGS_CommonItemData.h"
#include "IGS_LootItemsData.h"
#include "IGS_ModTableRow.h"
#include "IGS_ThrowableData.h"
#include "IGS_WeaponDefinitionTableRow.h"
#include "IGS_WieldableBaseData.h"
#include "META_HeisterLoadout.h"
#include "Templates/SubclassOf.h"
#include "IGS_ItemDataHelpers.generated.h"

class UIGS_CarryableInventoryObject;
class UIGS_EquipmentInventoryObject;
class UIGS_InventoryObjectFramework;
class UIGS_LootItemInventoryObject;
class UIGS_ModInventoryObject;
class UIGS_WieldableInventoryObjectBase;
class UMETA_WeaponInventoryObject;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_ItemDataHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ItemDataHelpers();

    UFUNCTION(BlueprintCallable)
    static FMETA_HeisterLoadout MakeMetaHeisterLoadout(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, const TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>& inEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSecondary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSecondary(FIGS_WieldableBaseData inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrimary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPrimary(FIGS_WieldableBaseData inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPowerWeapon(FIGS_WieldableBaseData inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMelee_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMelee(FIGS_WieldableBaseData inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFrag(FIGS_ThrowableData inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFlash(FIGS_ThrowableData inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExplosive_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExplosive(FIGS_WieldableBaseData inWieldableData);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_WeaponDefinitionTableRow GetWeaponDefinitionDataBP(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponDefinitionID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_PerkCategory> GetPerksFromBitmask(int32 inBitmask);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_PerkClass> GetPerksClassesFromBitmask(int32 inBitmask);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_ModTableRow GetModDataFromObject(UIGS_ModInventoryObject* inModObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_LootItemsData GetLootItemData(UObject* inWCO, TSubclassOf<UIGS_LootItemInventoryObject> inClass, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_ItemType GetItemTypeFromObject(const UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CommonItemData GetCommonDataForClassBP(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_CarryableTableRow GetCarryableDataFromObject(UIGS_CarryableInventoryObject* inCarryableObject);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesItemClassHaveProperty(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, EIGS_ItemPropertyFlags inItemFlag);
    
};

