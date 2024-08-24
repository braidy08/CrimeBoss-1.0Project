#pragma once
#include "CoreMinimal.h"
#include "IGS_SuspicionActorBase.h"
#include "IGS_ProgressGadgetBase.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProgressGadgetBase : public AIGS_SuspicionActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanByDisrubtedByAI;
    
public:
    AIGS_ProgressGadgetBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetCanBeDisruptedByAI(bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisruptedByAI(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisrupted();
    
};

