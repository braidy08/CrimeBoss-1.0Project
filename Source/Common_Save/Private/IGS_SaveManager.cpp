#include "IGS_SaveManager.h"

UIGS_SaveManager::UIGS_SaveManager() {
    this->CareerSlotName = TEXT("SaveName");
    this->CachedAccountSave = NULL;
    this->CachedQuickplaySave = NULL;
    this->CachedCareerSave = NULL;
    this->CachedCareerDebugSave = NULL;
    this->WeaponCheatSelectionDebugSave = NULL;
}

void UIGS_SaveManager::SetPlotlinesDisableDebugData(const UObject* inWCO, bool bDisable) {
}

void UIGS_SaveManager::SetCareerSlotName(const UObject* inWCO, const FString& inNewCareerSlotName) {
}

void UIGS_SaveManager::SetCareerDebugData(const UObject* inWCO, FMETA_SaveData_DebugCareer inData) {
}

void UIGS_SaveManager::SaveWeaponCheatSelection(const UObject* inWCO, const FIGS_WeaponCheatSelection_DebugData& inWeaponSelection) {
}

void UIGS_SaveManager::SaveQuickplay(const UObject* inWCO) {
}

void UIGS_SaveManager::SavePlayerReadEULA() {
}

void UIGS_SaveManager::SaveCareer(const UObject* inWCO, const FString& inCareerSlotName) {
}

void UIGS_SaveManager::SaveAll(const UObject* inWCO, const FString& inCareerSlotName, bool inIsDebugSaveFile) {
}

void UIGS_SaveManager::SaveAccount(const UObject* inWCO, bool inIsDebugSaveFile) {
}

UIGS_DebugWeaponCheatSelection* UIGS_SaveManager::LoadWeaponCheatSelection(const UObject* inWCO) {
    return NULL;
}

UIGS_PaybackSaveGameQuickplay* UIGS_SaveManager::LoadQuickplay(const UObject* inWCO) {
    return NULL;
}

UIGS_PaybackSaveGameCareer* UIGS_SaveManager::LoadCareer(const UObject* inWCO, const FString& inCareerSlotName) {
    return NULL;
}

UIGS_PaybackSaveGameAccount* UIGS_SaveManager::LoadAccount(const UObject* inWCO, bool inIsDebugSaveFile) {
    return NULL;
}

bool UIGS_SaveManager::IsCareerDebugDataFilled(const UObject* inWCO) {
    return false;
}

FString UIGS_SaveManager::GetCareerSlotNameFromConfig(const UObject* inWCO) {
    return TEXT("");
}

FString UIGS_SaveManager::GetCareerSlotName(const UObject* inWCO) {
    return TEXT("");
}

FMETA_SaveData_DebugCareer UIGS_SaveManager::GetCareerDebugData(const UObject* inWCO) {
    return FMETA_SaveData_DebugCareer{};
}

TArray<FIGS_CareerSlotInfo> UIGS_SaveManager::GetAllCareerSaveFiles() const {
    return TArray<FIGS_CareerSlotInfo>();
}

bool UIGS_SaveManager::DoesDebugWeaponCheatSelectionSaveExist(const UObject* inWCO) {
    return false;
}

bool UIGS_SaveManager::DoesDebugCareerSaveExist(const FString& inCareerSlotName) {
    return false;
}

bool UIGS_SaveManager::DoesCareerSaveExist(const FString& inCareerSlotName) {
    return false;
}

bool UIGS_SaveManager::DidPlayerReadEULA() {
    return false;
}

void UIGS_SaveManager::DeleteCareer(const UObject* inWCO, const FString& inCareerSlotName) {
}

UIGS_PaybackSaveGameCareer* UIGS_SaveManager::CreateCareer(const UObject* inWCO, const FString& inCareerSlotName) {
    return NULL;
}

void UIGS_SaveManager::AddPlotlineTagToDebugData(const UObject* inWCO, FGameplayTag inPlotlineTag, bool& bSuccess) {
}


