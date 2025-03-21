#pragma once
#include "CoreMinimal.h"
#include "EIGS_HeistersEventNotificationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_HeistersEventNotificationType : uint8 {
    Unknown = 255,
    EquipGun = 0,
    PickupGun,
    SwapGun,
    Reloading,
    AmmoChange,
    HealthChanged,
    ThrowingGrenade,
    SilentKillEnemy,
    LoudKillEnemy,
    CombatKillEnemy,
    SpecialAction,
    AllInDownstate,
    Death,
    Shove,
    ShotsFired,
    ShotsFiredInStealth,
    Detected,
    SuppressionAggroChanged,
    BeingRevived,
    ReviveCanceled,
    InDownstate,
    IsDying,
    AlmostDeath,
    HeisterSquadHealthChanged,
    HeisterSquadFiring,
    HeisterSquadHittingEnemy,
    HeisterSquadStopFiring,
    HeisterSquadStopHittingEnemy,
    Ping,
    BotCommand,
    LootBag,
    Lockpick,
    Looting,
};

