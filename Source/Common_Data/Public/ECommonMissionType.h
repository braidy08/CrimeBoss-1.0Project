#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionType.generated.h"

UENUM(BlueprintType)
enum class ECommonMissionType : uint8 {
    Type_UNKNOWN = 255,
    Type_Story = 0,
    Type_SmallHit,
    Type_MediumHeist,
    Type_BigHeist,
};

