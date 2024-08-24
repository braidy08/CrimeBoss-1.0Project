#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "IGS_CharacterAnimInstanceProxy.generated.h"

class UIGS_CharacterAnimationStateMachine;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_CharacterAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_CharacterAnimationStateMachine* m_CharacterAnimationStateMachine;
    
public:
    FIGS_CharacterAnimInstanceProxy();
};

