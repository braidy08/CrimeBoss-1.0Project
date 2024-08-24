#include "IGS_LootManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_LootManager::UIGS_LootManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalValueSpawned = 0.00f;
    this->TotalLootValueSpawned = 0.00f;
    this->TotalMoneyValueSpawned = 0.00f;
    this->TotalObjectiveValueSpawned = 0.00f;
    this->NeededObjectiveWeight = 0;
    this->AllSpawnedLootWeight = 0;
    this->SecuredLootValue = 0;
    this->SecuredLootWeight = 0;
    this->SecuredBonusLootValue = 0;
    this->BonusWeightFromRequiredLoot = 0;
    this->SecuredObjectiveLootWeight = 0;
    this->SecuredBonusLootWeight = 0;
    this->bDisableLootVoiceLines = false;
    this->bHasShownError = false;
}

TMap<FGameplayTag, int32> UIGS_LootManager::SortLootByTag(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inLoot) {
    return TMap<FGameplayTag, int32>();
}

void UIGS_LootManager::SetMissionBagsInWeight(int32 inRequiredBags) {
}

void UIGS_LootManager::ResetCollectedLoot() {
}

void UIGS_LootManager::RegisterLootItem(TSubclassOf<UIGS_LootItemInventoryObject> inLootItem) {
}

void UIGS_LootManager::RegisterLootCollection(AIGS_LootCollectionBase* inLootCollection) {
}

void UIGS_LootManager::OnRep_SecuredLoot(int32 inOldSecuredLootValue) {
}

void UIGS_LootManager::OnRep_SecuredBonusLoot(int32 inOldSecuredBonusLootValue) {
}

void UIGS_LootManager::OnPocketLootWeightChanged() {
}

bool UIGS_LootManager::IsObjectiveLootCollected() {
    return false;
}

float UIGS_LootManager::GetValuePercentage(float InValue) {
    return 0.0f;
}

UIGS_LootManager* UIGS_LootManager::GetLootManager(UObject* inWCO) {
    return NULL;
}

float UIGS_LootManager::GetItemValueFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass) {
    return 0.0f;
}

FGameplayTag UIGS_LootManager::GetItemTypeFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass) {
    return FGameplayTag{};
}

int32 UIGS_LootManager::GetItemSize(EIGS_ItemWeight inWeight) const {
    return 0;
}

void UIGS_LootManager::DisableLootVoiceLines(UObject* inWCO, bool bDisable) {
}

float UIGS_LootManager::CalculateSpecialLootItemValue(FGameplayTag inItemTag, int32 inItemWeight) {
    return 0.0f;
}

void UIGS_LootManager::CalculateNewLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject) {
}

void UIGS_LootManager::CalculateNewBonusLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject) {
}

float UIGS_LootManager::CalculateLootItemValue(int32 inWeight, FGameplayTag inItemTag, bool inbNewItem) {
    return 0.0f;
}

float UIGS_LootManager::CalculateBonusLootItemValue(int32 inWeight, FGameplayTag inItemTag, bool inbNewItem) {
    return 0.0f;
}

void UIGS_LootManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_LootManager, TotalObjectiveValueSpawned);
    DOREPLIFETIME(UIGS_LootManager, SecuredLootValue);
    DOREPLIFETIME(UIGS_LootManager, SecuredBonusLootValue);
}


