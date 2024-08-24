#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_OnAnimatedInteractionLerpFinishedDelegate.h"
#include "IGS_AnimatedInteractiveComponentBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_PlayerCharacterMovementComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentBase : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Progress, meta=(AllowPrivateAccess=true))
    float R_Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StartPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CurrentPlayerCharInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerCharacterMovementComponent* PlayerMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimationOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAnimationImmediately;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToExactPositionAndRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TolerableThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailsafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePhysicsDuringLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetFlyingWhenLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveWithInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActAsNormalInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAnimatedInteractionLerpFinished OnAnimatedInteractionLerpFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAnimatedInteractionLerpFinished OnServerAnimatedInteractionLerpFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_FailsafeTimerHandle;
    
public:
    UIGS_AnimatedInteractiveComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Server_OnPreInteractionLerpFinished(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseInput();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress(float inOldProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MovePlayerToPointInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Client_OnPreInteractionLerpFinished(AIGS_GameCharacterFramework* inInstigator);
    
};

