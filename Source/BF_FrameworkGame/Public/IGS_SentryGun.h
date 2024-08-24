#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_DetectorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_SentryGun.generated.h"

class UAkComponent;
class UIGS_SimpleHitScanShooter;
class UIGS_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SentryGun : public AIGS_DetectorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MuzzleFlashReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_SimpleHitScanShooter* Shooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_WeaponInventoryObject* WeaponObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootAngleDegrees;
    
public:
    AIGS_SentryGun(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticShootStopped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticShootStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticShootStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticShootStarted();
    
};

