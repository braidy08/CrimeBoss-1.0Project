#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetPrimaryGameMenu.generated.h"

class AIGS_PlayerControllerRoot;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetPrimaryGameMenu : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
public:
    UIGS_WidgetPrimaryGameMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetGameMenuSetup();
    
};

