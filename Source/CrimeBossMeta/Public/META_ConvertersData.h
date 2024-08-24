#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "META_HeisterLoadout.h"
#include "META_WeaponAmountInfo.h"
#include "META_GenericCharacterSave.h"
#include "META_GraphStructSave.h"
#include "META_HeisterLoadoutSave.h"
#include "META_MissionsSave.h"
#include "META_UniqueCharacterSave.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EMETA_JobResult.h"
#include "EMETA_RespectLvl.h"
#include "META_TileSaveData.h"
#include "META_WeaponSaveData.h"
#include "META_GraphStruct.h"
#include "Templates/SubclassOf.h"
#include "META_ConvertersData.generated.h"

class UIGS_LootItemInventoryObject;
class UMETA_BaseMission;
class UMETA_Character;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;
class UMapTile;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ConvertersData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_ConvertersData();

    UFUNCTION(BlueprintCallable)
    static TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> ConvertWeaponsToSave(UPARAM(Ref) TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TMap<UMETA_Weapon*, int32> ConvertWeaponsFromSave(UObject* inWCO, const TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertUniqueCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, UPARAM(Ref) TArray<FMETA_UniqueCharacterSave>& inUniqueCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FGameplayTag, FMETA_TileSaveData> ConvertTilesDataToSave(UPARAM(Ref) TMap<FGameplayTag, UMapTile*>& inTiles);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertTilesDataFromSave(UPARAM(Ref) TMap<FGameplayTag, UMapTile*>& inTiles, TMap<FGameplayTag, FMETA_TileSaveData> inTilesSaveData);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_MissionsSave ConvertMissionsToSave(TArray<UMETA_BaseMission*> inMissions, TArray<UMETA_BaseMission*> inTurfMissions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_BaseMission*> ConvertMissionsFromSave(const UObject* inWCO, UPARAM(Ref) FMETA_MissionsSave& inMissions, TArray<UMETA_BaseMission*>& outTurfWarMissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertMissionResultMeta2FPS(EMETA_JobResult MetaResult, ECommonMissionResult& FPSResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertMissionResultFPS2Meta(ECommonMissionResult FPSResult, EMETA_JobResult& MetaResult);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertLootFromFPS(UObject* inWCO, UPARAM(Ref) TArray<TSubclassOf<UIGS_LootItemInventoryObject>>& inLoot, TMap<FGameplayTag, int32>& outMetaLoot, int32& CashLoot);
    
    UFUNCTION(BlueprintCallable)
    static TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponSaveData> ConvertLiveWeaponsToSave(UPARAM(Ref) TMap<UMETA_Weapon*, int32>& inWeapons);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_HeisterLoadoutSave ConvertHeisterLoadoutToSave(const FMETA_HeisterLoadout& inLoadout);
    
    UFUNCTION(BlueprintCallable)
    static FMETA_HeisterLoadout ConvertHeisterLoadoutFromSave(UObject* inWCO, UPARAM(Ref) FMETA_HeisterLoadoutSave& inLoadout);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_GraphStructSave> ConvertGraphInfoToSave(UPARAM(Ref) TArray<FMETA_GraphStruct>& inGraphInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMETA_GraphStruct> ConvertGraphInfoFromSave(UPARAM(Ref) TArray<FMETA_GraphStructSave>& inGraphInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertGenericCharactersFromSave(UObject* inWCO, UPARAM(Ref) TArray<FMETA_GenericCharacterSave>& inGenericCharacters);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertCharactersToSave(UPARAM(Ref) TArray<UMETA_Character*>& inCharacters, TArray<FMETA_GenericCharacterSave>& outGenericCharacters, TArray<FMETA_UniqueCharacterSave>& outUniqueCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertCharactersFromSaveForCrew(UObject* inWCO, UPARAM(Ref) TArray<FMETA_GenericCharacterSave>& inGenericCharacters, UPARAM(Ref) TArray<FMETA_UniqueCharacterSave>& inUniqueCharacters);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_Character*> ConvertCharactersFromSaveForBlackmarket(UObject* inWCO, EMETA_RespectLvl inBossRespect, UPARAM(Ref) TArray<FMETA_GenericCharacterSave>& inGenericCharacters, UPARAM(Ref) TArray<FMETA_UniqueCharacterSave>& inUniqueCharacters);
    
};

