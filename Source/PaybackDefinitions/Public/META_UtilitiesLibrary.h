#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_WeaponSubtype.h"
#include "EMETA_CharacterTier.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_Gang.h"
#include "EMETA_IntelUnlockLevel.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_TradeVendor.h"
#include "META_CharacterID.h"
#include "META_ConditionForArmyTierChanging.h"
#include "META_UtilitiesLibrary.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_UtilitiesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_UtilitiesLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundNextDigitsOfNumberToZero(int32 inNumber, int32 inAmountOfFirstDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUniqueCharacter(EIGS_CharacterID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGenericCharacter(EIGS_CharacterID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBoss(EIGS_CharacterID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWarehouseAttackLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTurfWarLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTimeLogPrefix();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EMETA_CharacterTier> GetTiersFromBitmask(int32 inBitmask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStashLogPrefix();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetRandomizedLootItemAvailableOnMeta();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRandEventLogPrefix();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EMETA_ItemQuality> GetQualitiesFromBitmask(int32 inBitmask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPerksLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMarketWeaponEventLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMarketLootEventsLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMarketHireArmyEventLogPrefix();
    
    UFUNCTION(BlueprintCallable)
    static bool GetLootLevel(FGameplayTag inLootTag, int32& Level, FGameplayTag& outMainLootTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHeisterLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGraphLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCashLogPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBossLevelLogPrefix();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllLootItemsAvailableOnMeta();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllChildTagsIncludingNested(FGameplayTag ParentTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetAllChildTag(FGameplayTag ParentTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EMETA_IntelUnlockLevel> GetAllAvailableIntelUnlockLevelByUpperLevel(EMETA_IntelUnlockLevel inUpperLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMETA_Gang ConvertVendorToGang(EMETA_TradeVendor inVendor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMETA_TradeVendor ConvertGangToVendor(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_WeaponSubtype ConvertClassTagToWeaponSubtype(FGameplayTag inClassTag);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_InventorySlot ConvertClassTagToEnumSlot(FGameplayTag inClassTag);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareInt(int32 InValue, int32 inCompareWith, EMETA_ConditionOperator inOperator);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareFloat(float InValue, float inCompareWith, EMETA_ConditionOperator inOperator);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> CalculateParentLootTagsForArray(TArray<FGameplayTag> inGameplayTagArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalculateIndexForArrayOfChances(TArray<int32> inChances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreGraphCharactersIDsEqual(const FMETA_CharacterID& First, const FMETA_CharacterID& Second);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreConditionsForArmyTierChangingEqual(const FMETA_ConditionForArmyTierChanging& inFirst, const FMETA_ConditionForArmyTierChanging& inSecond);
    
};

