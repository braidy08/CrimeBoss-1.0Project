#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "CommonMissionDataBigHeist.h"
#include "CommonMissionDataMediumHeist.h"
#include "CommonMissionDataSmallHit.h"
#include "ECommonMissionType.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_LightingScenarioType.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_Heat.h"
#include "IGS_Meta2FPS_Data.h"
#include "CustomMissionData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FCustomMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_Meta2FPS_Data MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonMissionDataSmallHit SmallHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonMissionDataBigHeist BigHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonMissionDataMediumHeist MediumHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubBackdropTypes DistrictVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Scenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LightingScenarioType LightingScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonHeisterData SelectedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_Heat Heat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonMissionType MissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ScenarioDifficulty MissionDifficulty;
    
    FCustomMissionData();
};

