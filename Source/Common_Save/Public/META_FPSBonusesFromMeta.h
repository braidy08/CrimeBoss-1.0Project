#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "META_FPSBonusesFromMeta.generated.h"

USTRUCT(BlueprintType)
struct FMETA_FPSBonusesFromMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkData> ArmyPerkData;
    
    COMMON_SAVE_API FMETA_FPSBonusesFromMeta();
};

