#pragma once
#include "CoreMinimal.h"
#include "META_ArmyTierConfiguration.h"
#include "UObject/Interface.h"
#include "META_BMEventLootData.h"
#include "META_VendorLootKey.h"
#include "META_BlackmarketManager.generated.h"

class UMETA_BaseObject;
class UMETA_Character;
class UMETA_PlotlineAsset;
class UMETA_Weapon;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_BlackmarketManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_BlackmarketManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBMLootEventReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetWeaponsPoolRefreshPrice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<UMETA_Weapon*, int32> GetWeaponsPoolForBMWeaponEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<UMETA_Weapon*, int32> GetWeaponsMarketPool(bool inIsLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_PlotlineAsset*> GetPlotlineAssetsPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMETA_ArmyTierConfiguration GetHireArmyEventData(bool& bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHeistersPoolRefreshPrice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_Character*> GetHeistersMarketPool(bool inIsLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> GetBMEventLootDataForVendors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAmountOfSoldiersCanBeBought();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAmountOfGeneratedSoldiers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceWeaponsPoolRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceHeistersPoolRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuySoldiers(int32 inAmount, int32& outAmountOfSoldiersBought);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuyItem(UMETA_BaseObject* inMetaObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateLootEventByVendor(FMETA_VendorLootKey inVendorLootKey);
    
};

