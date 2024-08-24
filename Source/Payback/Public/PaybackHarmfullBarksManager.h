#pragma once
#include "CoreMinimal.h"
#include "AIBarksManagerBase.h"
#include "PaybackHarmfullBarksManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHarmfullBarksManager : public UAIBarksManagerBase {
    GENERATED_BODY()
public:
    UPaybackHarmfullBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StickyStart(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StickyEndWithoutLOS(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StickyEndWithLOS(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StickyChanged(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StickyArrive(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StealthIdle(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetectionStart(const AIGS_GameCharacterFramework* inInstigator, const AActor* inDetectingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetectionEnd(const AIGS_GameCharacterFramework* inInstigator, const AActor* inDetectingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CombatTaunt(const AIGS_GameCharacterFramework* inInstigator, bool hasVisibleTarget);
    
};

