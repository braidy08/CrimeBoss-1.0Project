#pragma once
#include "CoreMinimal.h"
#include "META_GenericCharacterSave.h"
#include "META_UniqueCharacterSave.h"
#include "IGS_Quick_CrewManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_CrewManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GenericCharacterSave> GenericCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_UniqueCharacterSave> UniqueCrewHeisters;
    
    FIGS_Quick_CrewManagerSaveData();
};

