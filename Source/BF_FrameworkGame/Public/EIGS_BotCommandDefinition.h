#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_BotCommandDefinition : uint8 {
    Unknown = 255,
    Follow = 0,
    HoldPosition,
};

