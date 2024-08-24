#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_StealthSettingsInstance.generated.h"

class UIGS_StealthSettings;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_StealthSettingsInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_StealthSettings* StealthSettings;
    
    UIGS_StealthSettingsInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseFootstepDetection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrikeAddedCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthTakedownRangeMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthTakedownDamageMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthRangedDamageMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSprintDetectionMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShoutCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFootstepDetectionMuliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFarDistanceDetectionMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFarAngleDetectionMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionMidPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionIncreaseThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectedCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultDetectionUpTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrouchDetectionMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatStateDetectionMuliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCivEscapedDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraDetectionUpTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraDetectionDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBotDetectionMuliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientLifeDetectionMuliplier() const;
    
};

