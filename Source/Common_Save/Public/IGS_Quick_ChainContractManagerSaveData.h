#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainMissionEntry.h"
#include "IGS_MissionResult.h"
#include "IGS_Quick_ChainResultsSaveData.h"
#include "META_GenericCharacterSave.h"
#include "META_MissionsSave.h"
#include "META_UniqueCharacterSave.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_ChainContractManagerSaveData.generated.h"

class UIGS_ChainContractID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainContractManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ChainContractID> ActiveChainContract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ChainMissionEntry> ActiveChainMissionSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_MissionsSave ActiveChainMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ActiveMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastUsedGenericID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MissionResult> CurrentChainResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_ChainContractID>, FIGS_Quick_ChainResultsSaveData> ChainContractResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool WasPlayingChainMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GenericCharacterSave> GenericCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_UniqueCharacterSave> UniqueCrewHeisters;
    
    FIGS_Quick_ChainContractManagerSaveData();
};

