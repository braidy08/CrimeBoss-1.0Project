#include "IGS_WeaponDefinitionsDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_WeaponDefinitionsDatabase::UIGS_WeaponDefinitionsDatabase() {
}

FGameplayTag UIGS_WeaponDefinitionsDatabase::GetWiedableClassById(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId) {
    return FGameplayTag{};
}

FIGS_WeaponDefinitionTableRow UIGS_WeaponDefinitionsDatabase::GetDataWeapon(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_WeaponDefinitionTableRow{};
}

FIGS_WeaponDefinitionTableRow UIGS_WeaponDefinitionsDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_WeaponDefinitionTableRow{};
}

TArray<FIGS_WeaponDefinitionTableRow> UIGS_WeaponDefinitionsDatabase::GetDatabaseTableBP() {
    return TArray<FIGS_WeaponDefinitionTableRow>();
}


