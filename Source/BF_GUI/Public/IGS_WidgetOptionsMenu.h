#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_NotifyWantCloseEventSignatureDelegate.h"
#include "IGS_WidgetOptionsMenu.generated.h"

class AIGS_PlayerControllerRoot;
class APlayerController;
class UIGS_GUIController;
class UIGS_WidgetButtonSimple;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetOptionsMenu : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* GameSetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* GraphicsSetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* SoundSetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* ControlsSetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* ApplyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* RevertButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetButtonSimple* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* SettingsWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GraphicsSetButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SoundSetButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ControlsSetButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CloseButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ApplyButtonText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NotifyWantCloseEventSignature OnWantCloseEvent;
    
    UIGS_WidgetOptionsMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateMenu() const;
    
    UFUNCTION(BlueprintCallable)
    void ShiftCurrentMenuSelected(int32 Direction);
    
    UFUNCTION(BlueprintCallable)
    void SetupInMainMenu(APlayerController* inOwningPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetupInGame(AIGS_PlayerControllerRoot* inOwningPlayer, UIGS_GUIController* inGUIController, bool inWasSystemMenuOpen);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetSettingsButtonsState(bool inState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RevertButtonClickedEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnRevertButtonClicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnApplyButtonClicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyButtonClickedEvent() const;
    
};

