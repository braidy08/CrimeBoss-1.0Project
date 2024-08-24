#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_MoneyMakingOpportunities.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_MoneyMakingOpportunities : public UInterface {
    GENERATED_BODY()
};

class IMETA_MoneyMakingOpportunities : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivityStart();
    
};

