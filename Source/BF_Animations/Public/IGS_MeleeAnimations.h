#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MeleeAnimations.generated.h"

class UIGS_BasherComponent;
class UIGS_NetworkComponentAnimation;
class UIGS_UArmsAniminstance;
class UIGS_UPlayerAnimationComponent;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_MeleeAnimations : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_UArmsAniminstance* m_ArmsAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_UPlayerAnimationComponent* m_PlayerAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BasherComponent* m_Basher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_NetworkComponentAnimation* m_NetworkComponentAnimation;
    
public:
    UIGS_MeleeAnimations();

};

