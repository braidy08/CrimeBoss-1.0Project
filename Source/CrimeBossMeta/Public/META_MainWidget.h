#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "EMETA_MenuState.h"
#include "META_MainWidget.generated.h"

class AMETA_BaseGameMode;
class AMETA_GameStateBase;
class IMETA_BlackmarketManager;
class UMETA_BlackmarketManager;
class IMETA_CrewManager;
class UMETA_CrewManager;
class IMETA_DailyManager;
class UMETA_DailyManager;
class IMETA_FinancialManager;
class UMETA_FinancialManager;
class IMETA_GoalsManager;
class UMETA_GoalsManager;
class IMETA_JobsManager;
class UMETA_JobsManager;
class IMETA_StashManager;
class UMETA_StashManager;
class IMETA_UIEventsManager;
class UMETA_UIEventsManager;
class UMETA_LevelActorsManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MainWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_UIEventsManager> UIEventsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_UIEventsManagerComponent* UIEventsManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_CrewManager> CrewManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_BlackmarketManager> BlackmarketManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_FinancialManager> FinanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_GoalsManager> GoalsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_JobsManager> JobsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_StashManager> StashManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_DailyManager> DailyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_LevelActorsManagerComponent* LevelActorsManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* MetaGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_GameStateBase* MetaGameState;
    
    UMETA_MainWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityMenuState(EMETA_MenuState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGamemodeReady();
    
};

