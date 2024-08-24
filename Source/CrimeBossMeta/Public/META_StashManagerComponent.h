#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_Partner.h"
#include "META_PartnerInfo.h"
#include "META_LootChangedDelegate.h"
#include "META_PartnerInfoChangedDelegate.h"
#include "META_StashManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_StashManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PartnerInfoChanged OnPartnerInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_LootChanged OnLootChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Partner, FMETA_PartnerInfo> PartnersInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Loot;
    
public:
    UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCashForPartner(EMETA_Partner Partner, int32 inCash);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetSortedLoot(bool inAscSort);
    
    UFUNCTION(BlueprintCallable)
    FMETA_PartnerInfo GetPartnerInfo(EMETA_Partner Partner, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetParentLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLogPrefix();
    
    UFUNCTION(BlueprintCallable)
    bool GetClosestMetaTagFromParents(FGameplayTag inLootTag, FGameplayTag& outMetaTag);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLootByValue(FGameplayTag inLootTag, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCashForPartner(EMETA_Partner Partner, int32 ByValue);
    
};

