#pragma once
#include "CoreMinimal.h"
#include "META_StatisticNoteSaveData.h"
#include "UObject/Interface.h"
#include "META_StatisticsManager.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_StatisticsManager : public UInterface {
    GENERATED_BODY()
};

class IMETA_StatisticsManager : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideStatisticForDay(int32 inDay, FMETA_StatisticNoteSaveData& outStatistic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideStatisticForAnIntervalOfDay(int32 inStartDay, int32 inEndDay, FMETA_StatisticNoteSaveData& outStatistic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideAllStatisticForCampaign(FMETA_StatisticNoteSaveData& outStatistic);
    
};

