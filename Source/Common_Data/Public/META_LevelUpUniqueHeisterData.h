#pragma once
#include "CoreMinimal.h"
#include "META_FloatInterval.h"
#include "META_LevelUpUniqueHeisterData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_LevelUpUniqueHeisterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FloatInterval LevelUpCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPerksAddedWithPromote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfEquipmentUnlockedWithPromote;
    
    FMETA_LevelUpUniqueHeisterData();
};

