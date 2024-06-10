#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.generated.h"

UENUM(BlueprintType)
enum class EIGS_InputDevice : uint8 {
    ID_UNKNOWN = 255,
    ID_KeyboardAndMouse = 0,
    ID_Gamepad_PS4,
    ID_Gamepad_PS5,
    ID_Gamepad_PSMove,
    ID_Gamepad_XOne,
    ID_Gamepad_XBoxSX,
    ID_Gamepad_Switch,
    ID_Gamepad_SteamDeck,
    ID_VR_Oculus,
    ID_VR_HTC_Vive,
    ID_VR_PSVR_Gamepad,
    ID_VR_PSVR_PSMove,
    ID_MAX UMETA(Hidden),
};

