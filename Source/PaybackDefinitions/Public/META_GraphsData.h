#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_CharacterID.h"
#include "EMETA_GraphStatus.h"
#include "META_Interval.h"
#include "META_PlotlineGraphStartTime.h"
#include "META_UniqueCharacterGraphInfo.h"
#include "META_GraphsData.generated.h"

class UMETA_BaseStoryGraph;

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_GraphsData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval FirstPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval SecondPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AnyNextPlotlineDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, EMETA_GraphStatus> StartedGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterGraphInfo> CharacterStoryGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, FMETA_PlotlineGraphStartTime> PlotlineGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraph> CrewRandEventsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_BaseStoryGraph> SpecialCrewEventsGraph;
    
public:
    UMETA_GraphsData();

    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, EMETA_GraphStatus> GetStartedGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraph> GetSpecialCrewEventsGraph();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetSecondPlotlineDays();
    
    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraph>, FMETA_PlotlineGraphStartTime> GetPlotlineGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetFirstPlotlineDays();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraph> GetCrewRandEventsGraph();
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetAnyNextPlotlineDays();
    
};

