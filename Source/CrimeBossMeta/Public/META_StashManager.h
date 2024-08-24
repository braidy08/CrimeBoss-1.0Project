#pragma once
#include "CoreMinimal.h"
#include "META_WeaponAmountInfo.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeVendor.h"
#include "Templates/SubclassOf.h"
#include "META_StashManager.generated.h"

class UMETA_WeaponInventoryObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_StashManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_StashManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveWeaponsFromStash(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash, int32& outRemovedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetTradeableLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> GetStashWeapons(bool inIsLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayersArmySize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayersArmyAvailableAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPawnShopLootValueLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPawnShopCurrentSellingLootValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetModifiersForPriceForSellingLoot(FGameplayTag inMainLootTag, float& outTrendModifier, float& outBaseModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLootValueByLootTag(FGameplayTag inLootTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetLootNameByLootTag(FGameplayTag inLootTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<EMETA_TradeVendor> GetAvailableVendorsForTradeByValue(FGameplayTag inLootTag, int32 inMonetaryValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetActualPriceForSellingLoot(FGameplayTag inLootTag, int32 inAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FGameplayTag> GetAccountPlotlineAssetsTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddWeaponsToStash(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash);
    
};

