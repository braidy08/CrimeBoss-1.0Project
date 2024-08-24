#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MeleeAttackAnimations.generated.h"

class AIGS_WieldableBase;
class UIGS_BasherComponent;
class UIGS_ReloaderBase;
class UIGS_UArmsAniminstance;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_MeleeAttackAnimations : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* m_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_BasherComponent* m_Basher_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_UArmsAniminstance* m_AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_ReloaderBase* m_ReloadBase;
    
public:
    UIGS_MeleeAttackAnimations();

};

