#pragma once
#include "CoreMinimal.h"
#include "EStoryType.generated.h"

UENUM(BlueprintType)
enum class EStoryType : uint8 {
    HeisterStory,
    BossSolo,
    BossStory,
};

