#include "META_StashManagerComponent.h"

UMETA_StashManagerComponent::UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMETA_StashManagerComponent::SetCashForPartner(EMETA_Partner Partner, int32 inCash) {
}

TMap<FGameplayTag, int32> UMETA_StashManagerComponent::GetSortedLoot(bool inAscSort) {
    return TMap<FGameplayTag, int32>();
}

FMETA_PartnerInfo UMETA_StashManagerComponent::GetPartnerInfo(EMETA_Partner Partner, bool& bSuccess) {
    return FMETA_PartnerInfo{};
}

TArray<FGameplayTag> UMETA_StashManagerComponent::GetParentLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UMETA_StashManagerComponent::GetLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue) {
    return TArray<FGameplayTag>();
}

FString UMETA_StashManagerComponent::GetLogPrefix() {
    return TEXT("");
}

bool UMETA_StashManagerComponent::GetClosestMetaTagFromParents(FGameplayTag inLootTag, FGameplayTag& outMetaTag) {
    return false;
}

void UMETA_StashManagerComponent::ChangeLootByValue(FGameplayTag inLootTag, int32 InValue) {
}

void UMETA_StashManagerComponent::ChangeCashForPartner(EMETA_Partner Partner, int32 ByValue) {
}


