#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnCancelledDelegate.h"
#include "IGS_OnConfirmedDelegate.h"
#include "IGS_OnExtraOptionSelectedDelegate.h"
#include "IGS_WaitForModalWindow.generated.h"

class UBinkMediaPlayer;
class UIGS_WaitForModalWindow;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_WaitForModalWindow : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnConfirmed OnConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnExtraOptionSelected OnExtraOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCancelled OnCancelled;
    
    UIGS_WaitForModalWindow();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIGS_WaitForModalWindow* WaitForVideoModalWindow(UObject* WorldContextObject, FText InTitle, FText inDescription, FText inConfirmText, FText inCancelText, FText inExtraOptionText, UBinkMediaPlayer* inMedia, bool inSlownDown);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UIGS_WaitForModalWindow* WaitForModalWindow(UObject* WorldContextObject, FText InTitle, FText inDescription, FText inConfirmText, FText inCancelText, FText inExtraOptionText);
    
private:
    UFUNCTION(BlueprintCallable)
    void ModalWindowExtraSelected_Internal();
    
    UFUNCTION(BlueprintCallable)
    void ModalWindowConfirmed_Internal();
    
    UFUNCTION(BlueprintCallable)
    void ModalWindowCancelled_Internal();
    
};

