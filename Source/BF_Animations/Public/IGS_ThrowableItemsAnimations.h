#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ActiveThrowAnimationHolder.h"
#include "IGS_ThrowableItemsAnimations.generated.h"

class AIGS_WieldableBase;
class UIGS_UArmsAniminstance;
class UIGS_UPlayerAnimationComponent;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_ThrowableItemsAnimations : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* m_WieldableBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_UArmsAniminstance* m_ArmsAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_UPlayerAnimationComponent* m_PlayerAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ActiveThrowAnimationHolder m_ActiveThrowGrenadeAnimation;
    
public:
    UIGS_ThrowableItemsAnimations();

};

