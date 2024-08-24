#pragma once
#include "CoreMinimal.h"
#include "META_StoryStatistic.generated.h"

class UMETA_BaseStoryGraph;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_StoryStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMETA_BaseStoryGraph>> PlotlinesFinished;
    
    FMETA_StoryStatistic();
};

