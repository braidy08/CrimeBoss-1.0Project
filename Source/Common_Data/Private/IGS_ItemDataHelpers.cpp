#include "IGS_ItemDataHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_ItemDataHelpers::UIGS_ItemDataHelpers() {
}

FMETA_HeisterLoadout UIGS_ItemDataHelpers::MakeMetaHeisterLoadout(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inPrimaryWeapon, const TSubclassOf<UMETA_WeaponInventoryObject>& inSecondaryWeapon, const TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>& inEquipment) {
    return FMETA_HeisterLoadout{};
}

bool UIGS_ItemDataHelpers::IsSecondary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsSecondary(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPrimary_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPrimary(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsPowerWeapon(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsMelee_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsMelee(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsFrag(FIGS_ThrowableData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsFlash(FIGS_ThrowableData inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsExplosive_WieldableObject(UIGS_WieldableInventoryObjectBase* inWieldableData) {
    return false;
}

bool UIGS_ItemDataHelpers::IsExplosive(FIGS_WieldableBaseData inWieldableData) {
    return false;
}

FIGS_WeaponDefinitionTableRow UIGS_ItemDataHelpers::GetWeaponDefinitionDataBP(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponDefinitionID) {
    return FIGS_WeaponDefinitionTableRow{};
}

TArray<EIGS_PerkCategory> UIGS_ItemDataHelpers::GetPerksFromBitmask(int32 inBitmask) {
    return TArray<EIGS_PerkCategory>();
}

TArray<EIGS_PerkClass> UIGS_ItemDataHelpers::GetPerksClassesFromBitmask(int32 inBitmask) {
    return TArray<EIGS_PerkClass>();
}

FIGS_ModTableRow UIGS_ItemDataHelpers::GetModDataFromObject(UIGS_ModInventoryObject* inModObject) {
    return FIGS_ModTableRow{};
}

FIGS_LootItemsData UIGS_ItemDataHelpers::GetLootItemData(UObject* inWCO, TSubclassOf<UIGS_LootItemInventoryObject> inClass, bool& outSucceeded) {
    return FIGS_LootItemsData{};
}

EIGS_ItemType UIGS_ItemDataHelpers::GetItemTypeFromObject(const UIGS_InventoryObjectFramework* inItem) {
    return EIGS_ItemType::Item_Weapon;
}

FIGS_CommonItemData UIGS_ItemDataHelpers::GetCommonDataForClassBP(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass) {
    return FIGS_CommonItemData{};
}

FIGS_CarryableTableRow UIGS_ItemDataHelpers::GetCarryableDataFromObject(UIGS_CarryableInventoryObject* inCarryableObject) {
    return FIGS_CarryableTableRow{};
}

bool UIGS_ItemDataHelpers::DoesItemClassHaveProperty(const UObject* inWCO, const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, EIGS_ItemPropertyFlags inItemFlag) {
    return false;
}


