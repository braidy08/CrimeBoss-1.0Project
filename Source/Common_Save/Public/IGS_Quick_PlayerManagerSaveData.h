#pragma once
#include "CoreMinimal.h"
#include "IGS_Quick_PlayerManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_PlayerManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 RespectPoints;
    
    FIGS_Quick_PlayerManagerSaveData();
};

