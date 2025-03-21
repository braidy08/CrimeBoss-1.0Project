#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "IGS_OnLootBagCountChangedDelegate.h"
#include "IGS_OnPocketLootChangedBPDelegate.h"
#include "IGS_OnSecuredLootAddedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameStateFramework.generated.h"

class UIGS_InventoryObjectFramework;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_GameStateFramework : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredLootAdded OnSecuredLootAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredLootAdded OnBonusLootChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPocketLootChangedBP OnPocketLootChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredLootAdded OnBonusPocketLootChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnLootBagCountChanged OnLootBagCountChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_PlayersImmortality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PocketLootValue, meta=(AllowPrivateAccess=true))
    float PocketLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BaggedLootValue, meta=(AllowPrivateAccess=true))
    float BaggedLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecuredLoot, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> PocketLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BonusPocketLoot, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> BonusPocketLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecuredLoot, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> SecuredLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BonusLoot, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> BonusLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LootBagCount, meta=(AllowPrivateAccess=true))
    int32 LootBagCount;
    
public:
    AIGS_GameStateFramework(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void RemoveSecuredLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static void RemovedPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBonusLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateBaggedLoot();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SecuredLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PocketLootValue();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootBagCount(int32 inOldCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BonusPocketLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BonusLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaggedLootValue(float inOldValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecuredLootWeight() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSecuredLootValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetSecuredLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPocketLootWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPocketLootValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetPocketLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetBonusPocketLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetBonusLoot() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAllLootCollectedValue();
    
    UFUNCTION(BlueprintCallable)
    void CountPocketLootAsSecuredLoot(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    bool ArePlayersImmortal();
    
    UFUNCTION(BlueprintCallable)
    static void AddSecuredLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static void AddPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static void AddLootBag(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void AddBonusPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static void AddBonusLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
};

