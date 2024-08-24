#include "META_Weapon.h"
#include "Templates/SubclassOf.h"

UMETA_Weapon::UMETA_Weapon() {
    this->m_Price = 0;
    this->m_AdditionalPercentageOfWeaponPrice = 0;
    this->m_AdditionalPercentageOfWeaponPriceFromMods = 0;
}

void UMETA_Weapon::SetPrice(int32 inNewPrice) {
}

bool UMETA_Weapon::SetInfo(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId) {
    return false;
}

void UMETA_Weapon::SetAdditionalPercentageOfWeaponPriceFromMods(int32 inAdditionalPercentageOfPrice) {
}

void UMETA_Weapon::SetAdditionalPercentageOfWeaponPrice(int32 inAdditionalPercentageOfPrice) {
}

void UMETA_Weapon::IsSignatureWeapon(bool& outSignature, EIGS_CharacterID& outSignatureCharacter) const {
}

bool UMETA_Weapon::IsMeleeWeapon() const {
    return false;
}

FIGS_WeaponTableRow UMETA_Weapon::GetWeaponTableRow() const {
    return FIGS_WeaponTableRow{};
}

EIGS_WeaponSubtype UMETA_Weapon::GetWeaponSubtype() const {
    return EIGS_WeaponSubtype::None;
}

FText UMETA_Weapon::GetTitle() const {
    return FText::GetEmpty();
}

EMETA_ItemQuality UMETA_Weapon::GetQuality() const {
    return EMETA_ItemQuality::None;
}

int32 UMETA_Weapon::GetPrice() const {
    return 0;
}

FIGS_MeleeWeaponTableRow UMETA_Weapon::GetMeleeWeaponTableRow() const {
    return FIGS_MeleeWeaponTableRow{};
}

EIGS_InventorySlot UMETA_Weapon::GetInventorySlot() const {
    return EIGS_InventorySlot::INVALID;
}

TSoftObjectPtr<UTexture2D> UMETA_Weapon::GetImage() const {
    return NULL;
}

TSubclassOf<UMETA_WeaponInventoryObject> UMETA_Weapon::GetId() const {
    return NULL;
}

FText UMETA_Weapon::GetDescription() const {
    return FText::GetEmpty();
}

int32 UMETA_Weapon::GetBasePrice() const {
    return 0;
}

int32 UMETA_Weapon::GetAdditionalPercentageOfWeaponPriceFromMods() {
    return 0;
}

int32 UMETA_Weapon::GetAdditionalPercentageOfWeaponPrice() const {
    return 0;
}


