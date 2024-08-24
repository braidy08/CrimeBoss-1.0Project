#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "IGS_MissionResult.h"
#include "IGS_Quick_ChainPlayerCharacters.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_ChainResult.generated.h"

class UIGS_ChainContractID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ChainContractID> ChainContractID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StarRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MissionResult> QuickMissionResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_Quick_ChainPlayerCharacters> PlayerHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCommonHeisterData> RemainingHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    FIGS_Quick_ChainResult();
};

