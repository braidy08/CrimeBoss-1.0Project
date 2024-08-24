#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveThrowAnimationHolder.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_ActiveThrowAnimationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Active_Throw_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Active_Weapon_Throw_Animation;
    
    BF_ANIMATIONS_API FIGS_ActiveThrowAnimationHolder();
};

