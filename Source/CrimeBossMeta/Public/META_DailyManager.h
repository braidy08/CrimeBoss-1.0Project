#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_DailyManager.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_DailyManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_DailyManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartNewDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MiddleDayEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndCurrentDay();
    
};

