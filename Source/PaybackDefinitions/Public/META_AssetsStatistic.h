#pragma once
#include "CoreMinimal.h"
#include "META_AssetsDataForStatistic.h"
#include "META_AssetsStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AssetsStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> AssetsEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> AssetsBoughtID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> AssetsLostID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> TotalAssetsID;
    
    FMETA_AssetsStatistic();
};

