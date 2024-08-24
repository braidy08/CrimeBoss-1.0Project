#include "CommonCharacterIDHelpers.h"

UCommonCharacterIDHelpers::UCommonCharacterIDHelpers() {
}

bool UCommonCharacterIDHelpers::IsValidUniqueCharacterID(EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidUniqueCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidGenericCharacterID(EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidGenericCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidCharacterID(EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidBossCharacterID(EIGS_CharacterID inCharacterID) {
    return false;
}

bool UCommonCharacterIDHelpers::IsValidBossCharacter(const UObject* inWCO, EIGS_CharacterID inCharacterID) {
    return false;
}

TArray<FIGS_CharacterTableRow> UCommonCharacterIDHelpers::GetValidUniqueCharactersData(const UObject* inWCO) {
    return TArray<FIGS_CharacterTableRow>();
}

TArray<EIGS_CharacterID> UCommonCharacterIDHelpers::GetValidUniqueCharacters(const UObject* inWCO) {
    return TArray<EIGS_CharacterID>();
}

TArray<FIGS_CharacterTableRow> UCommonCharacterIDHelpers::GetValidGenericCharactersData(const UObject* inWCO) {
    return TArray<FIGS_CharacterTableRow>();
}

TArray<EIGS_CharacterID> UCommonCharacterIDHelpers::GetValidGenericCharacters(const UObject* inWCO) {
    return TArray<EIGS_CharacterID>();
}

TArray<FIGS_CharacterTableRow> UCommonCharacterIDHelpers::GetValidBossCharactersData(const UObject* inWCO) {
    return TArray<FIGS_CharacterTableRow>();
}

TArray<EIGS_CharacterID> UCommonCharacterIDHelpers::GetValidBossCharacters(const UObject* inWCO) {
    return TArray<EIGS_CharacterID>();
}

EIGS_CharacterID UCommonCharacterIDHelpers::GetRandomUniqueCharacter(const UObject* inWCO) {
    return EIGS_CharacterID::Char_Unknown;
}

EIGS_CharacterID UCommonCharacterIDHelpers::GetRandomGenericCharacter(const UObject* inWCO) {
    return EIGS_CharacterID::Char_Unknown;
}

EIGS_CharacterID UCommonCharacterIDHelpers::GetRandomCharacter(const UObject* inWCO) {
    return EIGS_CharacterID::Char_Unknown;
}

EIGS_CharacterID UCommonCharacterIDHelpers::GetRandomBossCharacter(const UObject* inWCO) {
    return EIGS_CharacterID::Char_Unknown;
}

TArray<FIGS_CharacterTableRow> UCommonCharacterIDHelpers::GetAllValidCharactersData(const UObject* inWCO) {
    return TArray<FIGS_CharacterTableRow>();
}

TArray<EIGS_CharacterID> UCommonCharacterIDHelpers::GetAllValidCharacters(const UObject* inWCO) {
    return TArray<EIGS_CharacterID>();
}


