#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "IGS_OnDoomTimerEndEventDelegate.h"
#include "IGS_OnDoomTimerStartEventDelegate.h"
#include "IGS_OnShockChargeUsedEventDelegate.h"
#include "PaybackAICharacter.h"
#include "PaybackHeavyCharacter.generated.h"

class UCapsuleComponent;
class UIGS_ObjectStatus;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class PAYBACK_API APaybackHeavyCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* WeakSpotObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* WeakSpotCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* HeadPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CompromisedDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeakSpotCompromisedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShockChargeMeshComponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShockChargeMeshComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShockChargeMeshComponent3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShockChargeMeshComponent4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ShockChargeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShockChargeMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShockChargeMeshComponentAttachBone;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDoomTimerEndEvent OnDoomTimerEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDoomTimerStartEvent OnDoomTimerStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnShockChargeUsedEvent OnShockChargeBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnShockChargeUsedEvent OnShockChargeUsedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemainingMeshComps, meta=(AllowPrivateAccess=true))
    TArray<int32> mR_ActiveMeshComps;
    
public:
    APaybackHeavyCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnShockChargeBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingMeshComps();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnDoomTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleDeath(float inCurrentHealth, float inCurrentShield, float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void EnableHeadWeakSpot();
    
};

