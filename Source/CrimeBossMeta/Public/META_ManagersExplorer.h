#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_ManagersExplorer.generated.h"

class IMETA_BlackmarketManager;
class UMETA_BlackmarketManager;
class IMETA_CityMapManager;
class UMETA_CityMapManager;
class IMETA_CrewManager;
class UMETA_CrewManager;
class IMETA_DailyManager;
class UMETA_DailyManager;
class IMETA_EventsManager;
class UMETA_EventsManager;
class IMETA_FinancialManager;
class UMETA_FinancialManager;
class IMETA_GoalsManager;
class UMETA_GoalsManager;
class IMETA_HeatManager;
class UMETA_HeatManager;
class IMETA_JobsManager;
class UMETA_JobsManager;
class IMETA_MoneyMakingOpportunities;
class UMETA_MoneyMakingOpportunities;
class IMETA_RandEventsManager;
class UMETA_RandEventsManager;
class IMETA_StashManager;
class UMETA_StashManager;
class IMETA_UIEventsManager;
class UMETA_UIEventsManager;
class IMETA_WarManager;
class UMETA_WarManager;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_ManagersExplorer : public UInterface {
    GENERATED_BODY()
};

class IMETA_ManagersExplorer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_WarManager> GetWarManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_UIEventsManager> GetUIEventsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_StashManager> GetStashManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_RandEventsManager> GetRandEventsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_MoneyMakingOpportunities> GetMoneyMakingOpportunities();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_JobsManager> GetJobsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_HeatManager> GetHeatManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_GoalsManager> GetGoalsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_FinancialManager> GetFinancialManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_EventsManager> GetEventsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_DailyManager> GetDailyManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_CrewManager> GetCrewManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_CityMapManager> GetCityMapManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_BlackmarketManager> GetBlackmarketManager();
    
};

