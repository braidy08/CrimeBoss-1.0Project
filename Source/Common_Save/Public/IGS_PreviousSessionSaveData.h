#pragma once
#include "CoreMinimal.h"
#include "IGS_PreviousSessionSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_PreviousSessionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    FIGS_PreviousSessionSaveData();
};

