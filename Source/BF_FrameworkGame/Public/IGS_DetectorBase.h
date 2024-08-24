#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "IGS_HasObjectStatusInterface.h"
#include "GameFramework/Pawn.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "DetectorBaseStateChangedEventDelegate.h"
#include "EIGS_DetectorState.h"
#include "IGS_SentryRotationData.h"
#include "IGS_DetectorBase.generated.h"

class AActor;
class AIGS_PlayerCharacter;
class AIGS_SentryControllerFramework;
class UIGS_ObjectStatus;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_DetectorBase : public APawn, public IGenericTeamAgentInterface, public IAISightTargetInterface, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnEnabledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnDisabledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnDetectorDestroyedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnTargetDetectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectorBaseStateChangedEvent OnTargetLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SentryControllerFramework* DefaultController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllreadyReportedObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DetectionConeOrigin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectingPlayers, meta=(AllowPrivateAccess=true))
    TArray<AIGS_PlayerCharacter*> mR_DetectingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalHorizontalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalVerticalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrollingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectorState, meta=(AllowPrivateAccess=true))
    EIGS_DetectorState DetectorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIGS_SentryRotationData mR_RotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnDetectionChanged, meta=(AllowPrivateAccess=true))
    float mR_TargetDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WTSatusChanged, meta=(AllowPrivateAccess=true))
    EIGS_WalkieTalkieStatus mR_WalkieTalkieStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnTargetChanged, meta=(AllowPrivateAccess=true))
    AActor* mR_Target;
    
public:
    AIGS_DetectorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WTSatusChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnDetectionChanged(float inOldDetection);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectorState(EIGS_DetectorState inOldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectingPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetectorStateChanged(EIGS_DetectorState inNewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticDetectorDisabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticDetectorDestroyed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticDetectorControlled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_TeamSideEnum GetTeamSideId() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDetection(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticStartServoSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorStateChanged(EIGS_DetectorState inNewState, EIGS_DetectorState inOldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticDetectorControlled();
    

    // Fix for true pure virtual functions not being implemented
};

