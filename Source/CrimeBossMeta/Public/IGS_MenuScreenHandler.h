#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputThumbstickType.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuScreenHandler.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_MenuScreenHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentTag;
    
    UIGS_MenuScreenHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshFocusOnCurrentScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalGoBack();
    
    UFUNCTION(BlueprintCallable)
    void OnAnalogInputRequested(EIGS_InputThumbstickType Type, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void ForceWidgetRefocus();
    
    UFUNCTION(BlueprintCallable)
    void ForceSetCurrentTag(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForcePauseMenuEvent();
    
};

