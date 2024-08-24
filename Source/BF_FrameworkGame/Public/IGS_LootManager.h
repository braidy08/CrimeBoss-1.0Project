#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_OnAllCollectedLootSecuredDelegate.h"
#include "IGS_OnAllLootCollectedDelegate.h"
#include "IGS_OnAllowedLootChangedDelegate.h"
#include "IGS_OnHalfNeededLootCollectedDelegate.h"
#include "IGS_OnHalfNeededLootSecuredDelegate.h"
#include "IGS_OnHeisterItemAddedDelegate.h"
#include "IGS_OnLootCollectionRegisteredDelegate.h"
#include "IGS_OnNeededLootCollectedDelegate.h"
#include "IGS_OnNeededLootSecuredDelegate.h"
#include "IGS_OnSecuredBonusLootChangedDelegate.h"
#include "IGS_OnSecuredLootChangedDelegate.h"
#include "IGS_OnStartCollectionBonusLootDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootManager.generated.h"

class AActor;
class AIGS_LootCollectionBase;
class UIGS_InventoryObjectFramework;
class UIGS_LootItemInventoryObject;
class UIGS_LootManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHeisterItemAdded OnHeisterItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHeisterItemAdded OnHeisterItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnLootCollectionRegistered OnLootCollectionRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootCollectionBase*> LootCollections;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredLootChanged OnSecuredLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredBonusLootChanged OnSecuredBonusLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAllowedLootChanged OnAllowedLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHalfNeededLootCollected OnHalfNeededLootCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnNeededLootCollected OnNeededLootCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnStartCollectionBonusLoot OnStartCollectionBonusLoot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAllLootCollected OnAllLootCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHalfNeededLootSecured OnHalfLootSecured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnNeededLootSecured OnAllneededLootSecured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAllCollectedLootSecured OnAllCollectedLootSecured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLootValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TotalObjectiveValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeededObjectiveWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllSpawnedLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecuredLoot, meta=(AllowPrivateAccess=true))
    int32 SecuredLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecuredLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecuredBonusLoot, meta=(AllowPrivateAccess=true))
    int32 SecuredBonusLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusWeightFromRequiredLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SecuredLootByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SecuredBonusLootByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecuredObjectiveLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecuredBonusLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLootVoiceLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AllowedLoot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpecialSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasShownError;
    
public:
    UIGS_LootManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> SortLootByTag(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inLoot);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionBagsInWeight(int32 inRequiredBags);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectedLoot();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootItem(TSubclassOf<UIGS_LootItemInventoryObject> inLootItem);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootCollection(AIGS_LootCollectionBase* inLootCollection);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecuredLoot(int32 inOldSecuredLootValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecuredBonusLoot(int32 inOldSecuredBonusLootValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPocketLootWeightChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveLootCollected();
    
    UFUNCTION(BlueprintCallable)
    float GetValuePercentage(float InValue);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_LootManager* GetLootManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    float GetItemValueFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetItemTypeFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemSize(EIGS_ItemWeight inWeight) const;
    
    UFUNCTION(BlueprintCallable)
    static void DisableLootVoiceLines(UObject* inWCO, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    float CalculateSpecialLootItemValue(FGameplayTag inItemTag, int32 inItemWeight);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNewLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNewBonusLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    float CalculateLootItemValue(int32 inWeight, FGameplayTag inItemTag, bool inbNewItem);
    
    UFUNCTION(BlueprintCallable)
    float CalculateBonusLootItemValue(int32 inWeight, FGameplayTag inItemTag, bool inbNewItem);
    
};

