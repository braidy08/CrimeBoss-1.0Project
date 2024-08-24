#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterTier.h"
#include "META_AllowedHeistersInBM_Config.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AllowedHeistersInBM_Config {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_CharacterTier, int32> HeisterTierPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FMETA_AllowedHeistersInBM_Config();
};

