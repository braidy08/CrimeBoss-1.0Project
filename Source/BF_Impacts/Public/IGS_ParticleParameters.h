#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ParticleParameters.generated.h"

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ParticleParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PoolTags;
    
    FIGS_ParticleParameters();
};

