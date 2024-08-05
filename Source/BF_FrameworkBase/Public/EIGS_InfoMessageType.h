#pragma once
#include "CoreMinimal.h"
#include "EIGS_InfoMessageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_InfoMessageType : uint8 {
    Info_Generic,
    Info_ItemAdded,
    Info_SuspicionAdded,
    Info_PlayerDown,
    Info_PlayerDied,
    Info_PingWeapon,
    Info_ControlRoom,
    Info_AmmoPickup,
    Info_TelephoneAlarm,
    Info_AlarmButton,
};

