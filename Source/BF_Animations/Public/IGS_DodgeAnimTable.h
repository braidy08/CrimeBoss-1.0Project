#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_DodgeAnimTable.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_DodgeAnimTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimVariations;
    
    FIGS_DodgeAnimTable();
};

