#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuScreenWidget.h"
#include "GameplayTagContainer.h"
#include "META_ScreenWidget.generated.h"

class AMETA_BaseGameMode;
class IMETA_BlackmarketManager;
class UMETA_BlackmarketManager;
class IMETA_CityMapManager;
class UMETA_CityMapManager;
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
class IMETA_WarManager;
class UMETA_WarManager;
class UMETA_MediaManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_ScreenWidget : public UIGS_MenuScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_UIEventsManagerComponent* UIEventsManager;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_WarManager> WarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_CityMapManager> CityMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_MediaManagerComponent* MediaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* MetaGameMode;
    
    UMETA_ScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestSubscreenChangeByIndex(int32 inDifference);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGamemodeReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFeatureUnlocked(FGameplayTag inFeatureTag, bool inChildTagsUnlockedToo, bool inSilent, const FText& inCutsceneID, bool inVoiceoverOnly);
    
};

