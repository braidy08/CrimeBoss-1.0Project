#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_UniqueCharacterLoadoutFromGraph.h"
#include "META_UniqueCharacterGraphInfo.generated.h"

class UMETA_BaseStoryGraph;

USTRUCT(BlueprintType)
struct FMETA_UniqueCharacterGraphInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraph> Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_UniqueCharacterLoadoutFromGraph LoadoutOverride;
    
    PAYBACKDEFINITIONS_API FMETA_UniqueCharacterGraphInfo();
};

