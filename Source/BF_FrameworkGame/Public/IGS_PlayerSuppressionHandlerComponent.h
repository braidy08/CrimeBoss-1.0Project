#pragma once
#include "CoreMinimal.h"
#include "IGS_OnBulletMissCameraShakeSignatureDelegate.h"
#include "IGS_OnDirectionalPlayerCueSignatureDelegate.h"
#include "IGS_SuppressionHandlerComponent.h"
#include "IGS_PlayerSuppressionHandlerComponent.generated.h"

class AIGS_IntelligentGameCharacter;
class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSuppressionHandlerComponent : public UIGS_SuppressionHandlerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnBulletMissCameraShakeSignature OnBulletMissCameraShake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDirectionalPlayerCueSignature OnPlayDirectionalPlayerCueEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DirectionalBulletWhizAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BulletWhizAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SniperSonicCrackAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SniperSonicCrackRtpc;
    
public:
    UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayWhizSound() const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void PlayDirectionalPlayerShotAtCue_Client(const AIGS_IntelligentGameCharacter* inSourceCharacter) const;
    
};

