#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIEventNotificationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIEventNotificationType : uint8 {
    Unknown = 255,
    BreachTakePosition = 0,
    BreachClearObstacle,
    BreachIn,
    BreachEnd,
    SearchStart,
    SearchEnd,
    SearchPointCleared,
    Reloading,
    Death,
    SquadEnemySeen,
    SquadEnemyLost,
    WentOutside,
    WentPublic,
    WentEmployee,
    WentSecurity,
    WentCivlian,
    TakingDamage,
    ThrowingFlash,
    ThrowingFrag,
    ThrowingGas,
    SpottedDeath,
    Spawn,
    IsAimed,
    ShotHeard,
    CameraDestroyed,
    GuardZiptied,
    Detection,
    Sticky,
    StealthIdle,
    Escaping,
    Shooting,
    OnSlope,
    GadgetDisrupted,
};

