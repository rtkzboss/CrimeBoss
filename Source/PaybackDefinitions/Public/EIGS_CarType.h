#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CarType : uint8 {
    C_Unknown = 255,
    C_Sedan = 0,
    C_Van,
    C_Truck,
    C_Helicopter,
    C_F150,
    C_Camry,
    C_Lincoln,
    C_DodgeStealth,
    C_DodgeCharger,
    C_Boat,
};

