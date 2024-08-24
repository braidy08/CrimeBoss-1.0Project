#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Input/Events.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "IGS_OnAnalogInputEventRequestedDelegate.h"
#include "IGS_OnWidgetFocusRequestedDelegate.h"
#include "IGS_OnWidgetInputRequestedDelegate.h"
#include "IGS_MenuNavigationManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_INPUT_API UIGS_MenuNavigationManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnWidgetFocusRequested OnWidgetFocusRequestedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnWidgetInputRequested OnWidgetInputRequestedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnWidgetInputRequested OnGameStateInputRequestedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAnalogInputEventRequested OnAnalogInputEventRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnWidgetInputRequested OnWidgetInputReleasedEvent;
    
    UIGS_MenuNavigationManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged(EIGS_InputDevice inDevice);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_InputAction> KeyEventToInputActions(const FKeyEvent& InKeyEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWidgetInputBlocked();
    
};

