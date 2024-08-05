#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCommandType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerCommandType : uint8 {
    Command_SingleTap,
    Command_Follow,
    Command_FollowAll,
    Command_HoldPosition,
    Command_FireAtWill,
    Command_Disperse,
    Command_Assign,
    Command_OrderPosition,
    Command_Attack,
    Command_Yes,
    Command_No,
    Command_Praise,
    Command_Reproach,
    Command_Custom1,
    Command_Custom2,
    Command_NoticedEnemy,
    Command_DeliverLoot,
    Command_DeliverLootAll,
};

