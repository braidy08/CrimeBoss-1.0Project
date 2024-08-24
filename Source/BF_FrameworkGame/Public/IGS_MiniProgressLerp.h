#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EIGS_LerpCurve.h"
#include "MiniLerpOutputFinishPinDelegate.h"
#include "MiniLerpOutputPinDelegate.h"
#include "IGS_MiniProgressLerp.generated.h"

class UIGS_MiniProgressLerp;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_MiniProgressLerp : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniLerpOutputPin Update;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniLerpOutputFinishPin Finished;
    
    UIGS_MiniProgressLerp();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="inWorldContextObject"))
    static UIGS_MiniProgressLerp* MiniProgressLerp(UObject* inWorldContextObject, float inDuration, float inFromValue, float inToValue, EIGS_LerpCurve inCurve);
    
private:
    UFUNCTION(BlueprintCallable)
    void ExecUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ExecFinish();
    
};

