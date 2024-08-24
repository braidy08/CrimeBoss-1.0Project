#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_GrenadeProjectileBase.h"
#include "IGS_PlantableExplosiveProjectile.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlantableExplosiveProjectile : public AIGS_GrenadeProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushIntoMeshDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PlantRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPlanted;
    
public:
    AIGS_PlantableExplosiveProjectile(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSticked(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void Detonate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStick(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult);
    
};

