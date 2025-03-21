#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_CharacterState.h"
#include "BTDecorator_IsCharacterState.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsCharacterState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterState DesiredCharacterState;
    
public:
    UBTDecorator_IsCharacterState();

};

