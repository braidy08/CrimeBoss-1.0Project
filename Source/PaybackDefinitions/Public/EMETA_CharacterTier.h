#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterTier.generated.h"

UENUM(BlueprintType)
enum class EMETA_CharacterTier : uint8 {
    None,
    Rookie,
    Veteran,
    Elite,
    MAX = Elite,
};

