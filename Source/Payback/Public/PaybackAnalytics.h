#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PaybackAnalytics.generated.h"

class UObject;

UCLASS(Blueprintable)
class PAYBACK_API UPaybackAnalytics : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPaybackAnalytics();

    UFUNCTION(BlueprintCallable)
    static void ReportMissionFinishedToAnalytics(UObject* inWCO, ECommonMissionResult Result);
    
};

