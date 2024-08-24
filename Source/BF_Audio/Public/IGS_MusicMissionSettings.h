#pragma once
#include "CoreMinimal.h"
#include "IGS_MusicMissionSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MusicMissionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCutscene;
    
    BF_AUDIO_API FIGS_MusicMissionSettings();
};

