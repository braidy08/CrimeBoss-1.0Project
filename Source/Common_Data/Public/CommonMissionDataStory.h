#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "CommonMissionDataBase.h"
#include "EStoryType.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionDataStory.generated.h"

class UIGS_StoryMissionObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataStory : public FCommonMissionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_StoryMissionObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryType StoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID Character;
    
    FCommonMissionDataStory();
};

