#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAssetTableRow.h"
#include "META_PlotlineAssetsDatabase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_PlotlineAssetsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_PlotlineAssetsDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersistent(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnlockBossLevel(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetScore(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetPreviousVersion(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetNextTier(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    FText GetName(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetImage(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    FMETA_PlotlineAssetTableRow GetEventInfo(FGameplayTag inAssetID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    FText GetDescription(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    bool GetCanBeLost(FGameplayTag inAssetID, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool GetCanBeBought(FGameplayTag inAssetID, FGameplayTag& outPriceTag);
    
    UFUNCTION(BlueprintCallable)
    float GetBossPointMultiplier(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    EMETA_PlotlineAssetAvailability GetAvailability(FGameplayTag inAssetID);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetAssetsTags();
    
};

