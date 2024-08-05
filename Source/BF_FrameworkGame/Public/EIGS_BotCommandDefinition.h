#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_BotCommandDefinition : uint8 {
    Unknown = 255,
    Cancel = 0,
    Follow,
    FollowPlayer,
    HoldPosition,
    HoldYourPosition,
    AttackTarget,
    UseEquipment,
    Loot,
    Interact,
    PickupBag,
    PickupCarryable,
    StealthTakedown,
    ZipTie,
    SpeedUpGadget,
    DeliverLoot,
    Revive,
    Guard,
};

