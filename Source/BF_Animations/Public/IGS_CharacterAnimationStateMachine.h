#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_CharacterAnimationStateMachine.generated.h"

class UIGS_AimAt_LookAt_Animations;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_CharacterAnimationStateMachine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_AimAt_LookAt_Animations* m_AimAt_LookAt_Animations;
    
    UIGS_CharacterAnimationStateMachine();

};

