#pragma once
#include "CoreMinimal.h"
#include "EIGS_VehicleSpawnGroup.generated.h"

UENUM(BlueprintType)
enum class EIGS_VehicleSpawnGroup : uint8 {
    None,
    CommonPolice,
    VanSwat,
    VanHeisters,
    ATV,
    HelicopterSwat,
    HelicopterFriendly,
    BoatPatrol,
    BoatSwat,
    BoatEscape,
    VanGangster,
    BoatCivilian,
    GangsterCar,
    CarHeisters,
    DetectiveCar,
    HelicopterApache,
    HaitianVan,
    BakerGangCar,
    CagnaliGangCar,
    DragonGangCar,
    HieloGangCar,
    KhanGangCar,
    HelicopterMI8,
    BakerGangVan,
    CagnaliGangVan,
    DragonGangVan,
    HieloGangVan,
    KhanGangVan,
    CagnaliHelicopter,
};

