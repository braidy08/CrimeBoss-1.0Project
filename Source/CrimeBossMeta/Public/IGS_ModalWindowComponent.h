#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnCancelledDelegate.h"
#include "IGS_OnConfirmedDelegate.h"
#include "IGS_OnExtraOptionSelectedDelegate.h"
#include "IGS_ModalWindowComponent.generated.h"

class UBinkMediaPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ModalWindowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnConfirmed OnConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnExtraOptionSelected OnExtraOptionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCancelled OnCancelled;
    
    UIGS_ModalWindowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenVideoModalWindow(const FText& InTitle, const FText& inDescription, const FText& inConfirmText, const FText& inCancelText, const FText& inExtraOptionText, UBinkMediaPlayer* inMedia, bool inSlownDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenModalWindow(const FText& InTitle, const FText& inDescription, const FText& inConfirmText, const FText& inCancelText, const FText& inExtraOptionText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseModalWindow();
    
};

