#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMETA_Partner.h"
#include "Templates/SubclassOf.h"
#include "META_GoalsManager.generated.h"

class UMETA_BaseGoal;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_GoalsManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_GoalsManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectNewGoal(TSubclassOf<UMETA_BaseGoal> inGoalID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetGoalsPoolByPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetGoalsPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetActiveGoalsByPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetActiveGoals();
    
};

