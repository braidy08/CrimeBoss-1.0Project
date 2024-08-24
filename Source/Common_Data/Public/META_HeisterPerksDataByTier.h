#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterTier.h"
#include "META_HeisterPerksEconomyData.h"
#include "META_HeisterPerksDataByTier.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterPerksDataByTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_CharacterTier, FMETA_HeisterPerksEconomyData> Data;
    
    FMETA_HeisterPerksDataByTier();
};

