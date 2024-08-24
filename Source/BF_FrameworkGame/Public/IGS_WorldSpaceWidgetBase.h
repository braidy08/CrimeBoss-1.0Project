#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_StatusProgressChangedEventDelegate.h"
#include "IGS_isDrillChangedEventDelegate.h"
#include "IGS_WorldSpaceWidgetBase.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WorldSpaceWidgetBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_StatusProgressChangedEvent OnStatusProgressChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_isDrillChangedEvent OnIsDrillChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WorldWidgetOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WorldWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrill;
    
public:
    UIGS_WorldSpaceWidgetBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWorldSpaceWidgetVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetType(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerForBinding(AActor* inOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDrill(bool inbIsDrill);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHidden(bool inHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetTypeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressChanged();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsWidgetGroupVisible();
    
};

