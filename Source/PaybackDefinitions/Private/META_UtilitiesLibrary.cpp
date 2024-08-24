#include "META_UtilitiesLibrary.h"

UMETA_UtilitiesLibrary::UMETA_UtilitiesLibrary() {
}

int32 UMETA_UtilitiesLibrary::RoundNextDigitsOfNumberToZero(int32 inNumber, int32 inAmountOfFirstDigits) {
    return 0;
}

bool UMETA_UtilitiesLibrary::IsUniqueCharacter(EIGS_CharacterID ID) {
    return false;
}

bool UMETA_UtilitiesLibrary::IsGenericCharacter(EIGS_CharacterID ID) {
    return false;
}

bool UMETA_UtilitiesLibrary::IsBoss(EIGS_CharacterID ID) {
    return false;
}

FString UMETA_UtilitiesLibrary::GetWarehouseAttackLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetTurfWarLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetTimeLogPrefix() {
    return TEXT("");
}

TArray<EMETA_CharacterTier> UMETA_UtilitiesLibrary::GetTiersFromBitmask(int32 inBitmask) {
    return TArray<EMETA_CharacterTier>();
}

FString UMETA_UtilitiesLibrary::GetStashLogPrefix() {
    return TEXT("");
}

FGameplayTag UMETA_UtilitiesLibrary::GetRandomizedLootItemAvailableOnMeta() {
    return FGameplayTag{};
}

FString UMETA_UtilitiesLibrary::GetRandEventLogPrefix() {
    return TEXT("");
}

TArray<EMETA_ItemQuality> UMETA_UtilitiesLibrary::GetQualitiesFromBitmask(int32 inBitmask) {
    return TArray<EMETA_ItemQuality>();
}

FString UMETA_UtilitiesLibrary::GetPerksLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetMarketWeaponEventLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetMarketLootEventsLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetMarketHireArmyEventLogPrefix() {
    return TEXT("");
}

bool UMETA_UtilitiesLibrary::GetLootLevel(FGameplayTag inLootTag, int32& Level, FGameplayTag& outMainLootTag) {
    return false;
}

FString UMETA_UtilitiesLibrary::GetHeisterLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetGraphLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetCashLogPrefix() {
    return TEXT("");
}

FString UMETA_UtilitiesLibrary::GetBossLevelLogPrefix() {
    return TEXT("");
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::GetAllLootItemsAvailableOnMeta() {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::GetAllChildTagsIncludingNested(FGameplayTag ParentTag) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::GetAllChildTag(FGameplayTag ParentTag) {
    return TArray<FGameplayTag>();
}

TArray<EMETA_IntelUnlockLevel> UMETA_UtilitiesLibrary::GetAllAvailableIntelUnlockLevelByUpperLevel(EMETA_IntelUnlockLevel inUpperLevel) {
    return TArray<EMETA_IntelUnlockLevel>();
}

EMETA_Gang UMETA_UtilitiesLibrary::ConvertVendorToGang(EMETA_TradeVendor inVendor) {
    return EMETA_Gang::None;
}

EMETA_TradeVendor UMETA_UtilitiesLibrary::ConvertGangToVendor(EMETA_Gang inGang) {
    return EMETA_TradeVendor::UNDEFINED;
}

EIGS_WeaponSubtype UMETA_UtilitiesLibrary::ConvertClassTagToWeaponSubtype(FGameplayTag inClassTag) {
    return EIGS_WeaponSubtype::None;
}

EIGS_InventorySlot UMETA_UtilitiesLibrary::ConvertClassTagToEnumSlot(FGameplayTag inClassTag) {
    return EIGS_InventorySlot::INVALID;
}

bool UMETA_UtilitiesLibrary::CompareInt(int32 InValue, int32 inCompareWith, EMETA_ConditionOperator inOperator) {
    return false;
}

bool UMETA_UtilitiesLibrary::CompareFloat(float InValue, float inCompareWith, EMETA_ConditionOperator inOperator) {
    return false;
}

TArray<FGameplayTag> UMETA_UtilitiesLibrary::CalculateParentLootTagsForArray(TArray<FGameplayTag> inGameplayTagArray) {
    return TArray<FGameplayTag>();
}

int32 UMETA_UtilitiesLibrary::CalculateIndexForArrayOfChances(TArray<int32> inChances) {
    return 0;
}

bool UMETA_UtilitiesLibrary::AreGraphCharactersIDsEqual(const FMETA_CharacterID& First, const FMETA_CharacterID& Second) {
    return false;
}

bool UMETA_UtilitiesLibrary::AreConditionsForArmyTierChangingEqual(const FMETA_ConditionForArmyTierChanging& inFirst, const FMETA_ConditionForArmyTierChanging& inSecond) {
    return false;
}


