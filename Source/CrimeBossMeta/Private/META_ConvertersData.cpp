#include "META_ConvertersData.h"
#include "Templates/SubclassOf.h"

UMETA_ConvertersData::UMETA_ConvertersData() {
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> UMETA_ConvertersData::ConvertWeaponsToSave(TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>& inWeapons) {
    return TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>();
}

TMap<UMETA_Weapon*, int32> UMETA_ConvertersData::ConvertWeaponsFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>& inWeapons) {
    return TMap<UMETA_Weapon*, int32>();
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertUniqueCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, TArray<FMETA_UniqueCharacterSave>& inUniqueCharacters) {
    return TArray<UMETA_Character*>();
}

TMap<FGameplayTag, FMETA_TileSaveData> UMETA_ConvertersData::ConvertTilesDataToSave(TMap<FGameplayTag, UMapTile*>& inTiles) {
    return TMap<FGameplayTag, FMETA_TileSaveData>();
}

void UMETA_ConvertersData::ConvertTilesDataFromSave(TMap<FGameplayTag, UMapTile*>& inTiles, TMap<FGameplayTag, FMETA_TileSaveData> inTilesSaveData) {
}

FMETA_MissionsSave UMETA_ConvertersData::ConvertMissionsToSave(TArray<UMETA_BaseMission*> inMissions, TArray<UMETA_BaseMission*> inTurfMissions) {
    return FMETA_MissionsSave{};
}

TArray<UMETA_BaseMission*> UMETA_ConvertersData::ConvertMissionsFromSave(const UObject* inWCO, FMETA_MissionsSave& inMissions, TArray<UMETA_BaseMission*>& outTurfWarMissions) {
    return TArray<UMETA_BaseMission*>();
}

void UMETA_ConvertersData::ConvertMissionResultMeta2FPS(EMETA_JobResult MetaResult, ECommonMissionResult& FPSResult) {
}

void UMETA_ConvertersData::ConvertMissionResultFPS2Meta(ECommonMissionResult FPSResult, EMETA_JobResult& MetaResult) {
}

void UMETA_ConvertersData::ConvertLootFromFPS(UObject* inWCO, TArray<TSubclassOf<UIGS_LootItemInventoryObject>>& inLoot, TMap<FGameplayTag, int32>& outMetaLoot, int32& CashLoot) {
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> UMETA_ConvertersData::ConvertLiveWeaponsToSave(TMap<UMETA_Weapon*, int32>& inWeapons) {
    return TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>();
}

FMETA_HeisterLoadoutSave UMETA_ConvertersData::ConvertHeisterLoadoutToSave(const FMETA_HeisterLoadout& inLoadout) {
    return FMETA_HeisterLoadoutSave{};
}

FMETA_HeisterLoadout UMETA_ConvertersData::ConvertHeisterLoadoutFromSave(UObject* inWCO, FMETA_HeisterLoadoutSave& inLoadout) {
    return FMETA_HeisterLoadout{};
}

TArray<FMETA_GraphStructSave> UMETA_ConvertersData::ConvertGraphInfoToSave(TArray<FMETA_GraphStruct>& inGraphInfo) {
    return TArray<FMETA_GraphStructSave>();
}

TArray<FMETA_GraphStruct> UMETA_ConvertersData::ConvertGraphInfoFromSave(TArray<FMETA_GraphStructSave>& inGraphInfo) {
    return TArray<FMETA_GraphStruct>();
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertGenericCharactersFromSave(UObject* inWCO, TArray<FMETA_GenericCharacterSave>& inGenericCharacters) {
    return TArray<UMETA_Character*>();
}

void UMETA_ConvertersData::ConvertCharactersToSave(TArray<UMETA_Character*>& inCharacters, TArray<FMETA_GenericCharacterSave>& outGenericCharacters, TArray<FMETA_UniqueCharacterSave>& outUniqueCharacters) {
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertCharactersFromSaveForCrew(UObject* inWCO, TArray<FMETA_GenericCharacterSave>& inGenericCharacters, TArray<FMETA_UniqueCharacterSave>& inUniqueCharacters) {
    return TArray<UMETA_Character*>();
}

TArray<UMETA_Character*> UMETA_ConvertersData::ConvertCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, TArray<FMETA_GenericCharacterSave>& inGenericCharacters, TArray<FMETA_UniqueCharacterSave>& inUniqueCharacters) {
    return TArray<UMETA_Character*>();
}


