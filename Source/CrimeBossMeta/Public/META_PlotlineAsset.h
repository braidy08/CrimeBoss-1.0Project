#pragma once
#include "CoreMinimal.h"
#include "META_BaseObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAsset.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_PlotlineAsset : public UMETA_BaseObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AdditionalPricePercent;
    
public:
    UMETA_PlotlineAsset();

    UFUNCTION(BlueprintCallable)
    void SetInfo(UObject* inWCO, const FGameplayTag& inPlotlineAssetId);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPricePercent(float inAdditionalPricePercent);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnlockBossLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetPreviousVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription();
    
    UFUNCTION(BlueprintCallable)
    bool GetCanBeLost(bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossPointsMultiplier();
    
    UFUNCTION(BlueprintCallable)
    EMETA_PlotlineAssetAvailability GetAvailability();
    
};

