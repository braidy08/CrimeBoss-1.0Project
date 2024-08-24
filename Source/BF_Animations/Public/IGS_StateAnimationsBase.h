#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_StateAnimationsBase.generated.h"

class AIGS_IntelligentGameCharacter;
class UIGS_PlayerAnimInstance;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_StateAnimationsBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_PlayerAnimInstance* OwningAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_IntelligentGameCharacter* OwningCharacter;
    
public:
    UIGS_StateAnimationsBase();

};

