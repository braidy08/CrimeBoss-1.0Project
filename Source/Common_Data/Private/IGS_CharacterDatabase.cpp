#include "IGS_CharacterDatabase.h"

UIGS_CharacterDatabase::UIGS_CharacterDatabase() {
}

FIGS_MutableProfileData UIGS_CharacterDatabase::GetMutableVariationByIndex(UObject* inWCO, TSoftObjectPtr<UCustomizableObjectPopulation> inCustomizableInstance, int32 inIndex) {
    return FIGS_MutableProfileData{};
}

FIGS_MutableProfile UIGS_CharacterDatabase::GetMutableProfile(UObject* inWCO, TSoftObjectPtr<UCustomizableObjectPopulation> inCustomizableInstance) {
    return FIGS_MutableProfile{};
}

int32 UIGS_CharacterDatabase::GetIndex(EIGS_CharacterID inID) const {
    return 0;
}

FIGS_CharacterTableRow UIGS_CharacterDatabase::GetDataCharacter(UObject* inWCO, EIGS_CharacterID inID, bool& outSucceeded) {
    return FIGS_CharacterTableRow{};
}

FIGS_CharacterTableRow UIGS_CharacterDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_CharacterTableRow{};
}

TSoftClassPtr<APaperDollAbstract> UIGS_CharacterDatabase::GetCharacterPaperDoll(UObject* inWCO, EIGS_CharacterID inID, int32 inGenericID, bool inIsMaxLeveled) {
    return NULL;
}


