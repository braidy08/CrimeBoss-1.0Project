#pragma once
#include "CoreMinimal.h"
#include "META_FloatInterval.h"
#include "META_LevelUpGenericHeisterData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_LevelUpGenericHeisterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval LevelUpCostMultiplier;
    
    FMETA_LevelUpGenericHeisterData();
};

