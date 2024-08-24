#pragma once
#include "CoreMinimal.h"
#include "META_GameModeAdapter.h"
#include "GameFramework/GameModeBase.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "EMETA_MenuState.h"
#include "IGS_OnComponentsLoadedEventDelegate.h"
#include "IGS_OnMetaMenuStateChangedDelegate.h"
#include "META_ManagersExplorer.h"
#include "META_BaseGameMode.generated.h"

class UMETA_CrewManagerComponent;
class UMETA_EventManagerComponent;
class UMETA_GoalManagerComponent;
class UMETA_MainWidget;
class UMETA_MediaManagerComponent;
class UMETA_NotificationManagerComponent;
class UMETA_RandEventManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(Abstract, Blueprintable, NonTransient)
class CRIMEBOSSMETA_API AMETA_BaseGameMode : public AGameModeBase, public IMETA_ManagersExplorer, public IMETA_GameModeAdapter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_MenuState MenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_MainWidget* MainWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMetaMenuStateChanged OnMetaMenuStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnComponentsLoadedEvent OnComponentsLoadedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamemodeComponentsLoaded;
    
    AMETA_BaseGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMetaMenuState(EMETA_MenuState inState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetComponentsLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MenuStateChangeHandled(EMETA_MenuState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMetaInDebugMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMenuStateChange(EMETA_MenuState inState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_UIEventsManagerComponent* GetUIEventsManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_RandEventManagerComponent* GetRandManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_NotificationManagerComponent* GetNotificationManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_MediaManagerComponent* GetMediaManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_GoalManagerComponent* GetGoalManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_EventManagerComponent* GetEventManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_CrewManagerComponent* GetCrewManagerComponent();
    

    // Fix for true pure virtual functions not being implemented
};

