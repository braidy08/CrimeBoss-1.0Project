#include "IGS_WieldableInventoryObjectBase.h"

UIGS_WieldableInventoryObjectBase::UIGS_WieldableInventoryObjectBase() {
}

bool UIGS_WieldableInventoryObjectBase::WasAlreadyEquipped() {
    return false;
}

bool UIGS_WieldableInventoryObjectBase::IsSecondary() {
    return false;
}

bool UIGS_WieldableInventoryObjectBase::IsPrimary() {
    return false;
}

bool UIGS_WieldableInventoryObjectBase::IsMelee() {
    return false;
}

bool UIGS_WieldableInventoryObjectBase::IsExplosive() {
    return false;
}

FIGS_WieldableBaseData UIGS_WieldableInventoryObjectBase::GetWieldableDataBP() {
    return FIGS_WieldableBaseData{};
}

TSoftObjectPtr<UIGS_SkinData> UIGS_WieldableInventoryObjectBase::GetDefaultSkin() {
    return NULL;
}

TSoftObjectPtr<UIGS_SkinData> UIGS_WieldableInventoryObjectBase::GetCurrentSkin() {
    return NULL;
}


