#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "META_EventsManager.generated.h"

class UMETA_BaseStoryGraph;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_EventsManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_EventsManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetGraphVariableValue(FGameplayTag inVarName, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetGraphVariables();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGraphEconomyVariableByTag(FGameplayTag inVariableTag, int32& OutValue, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DEBUG_StartPlotline(const TSoftObjectPtr<UMETA_BaseStoryGraph>& inPlotline, FGameplayTag inGameplayTag, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSoftObjectPtr<UMETA_BaseStoryGraph>> DEBUG_GetPlotlines();
    
};

