#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_BinkMediaEventDelegate.h"
#include "IGS_PlayBinkMedia.generated.h"

class UBinkMediaPlayer;
// class UBinkMediaWidget;
class UIGS_PlayBinkMedia;
class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_PlayBinkMedia : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Finished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Started;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Failed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BinkMediaEvent Prepared;
    
//protected:
//    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
//    UBinkMediaWidget* BinkMediaWidget;
    
public:
    UIGS_PlayBinkMedia();

    UFUNCTION(BlueprintCallable)
    void SkipMovie();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayMedia();
    
    UFUNCTION(BlueprintCallable)
    static UIGS_PlayBinkMedia* PlayBinkMedia(UObject* inWCO, UBinkMediaPlayer* inBinkMediaPlayer, bool inAutoStart);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetSkipTriggered();
    
    UFUNCTION(BlueprintCallable)
    void OnMediaReachedEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    FTimespan GetElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetDuration();
    
};

