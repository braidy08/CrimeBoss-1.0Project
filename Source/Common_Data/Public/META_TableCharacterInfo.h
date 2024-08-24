#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterTier.h"
#include "Templates/SubclassOf.h"
#include "META_TableCharacterInfo.generated.h"

class UIGS_GameplayEffect_PerkBase;

USTRUCT(BlueprintType)
struct FMETA_TableCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_CharacterTier CharacterTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_GameplayEffect_PerkBase>> Perks;
    
    COMMON_DATA_API FMETA_TableCharacterInfo();
};

