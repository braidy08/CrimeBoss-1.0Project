#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "IGS_AIRequestAnimation.generated.h"

class UIGS_RequestAnimationsBase;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AIRequestAnimation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UIGS_RequestAnimationsBase*> m_RequestAnimationsTag;
    
public:
    UIGS_AIRequestAnimation();

};

