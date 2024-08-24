#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuCategory : uint8 {
    UNKNOWN = 255,
    Unique = 0,
    SmallHit,
    CharacterMission,
    MetaMission,
    PostLaunch,
    Test = 254,
};

