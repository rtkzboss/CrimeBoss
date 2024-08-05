#pragma once
#include "CoreMinimal.h"
#include "EIGS_WarzoneTiles.generated.h"

UENUM(BlueprintType)
enum class EIGS_WarzoneTiles : uint8 {
    INVALID = 255,
    Warehouse = 0,
    ParkingLot,
    Park,
    Garage,
    GasStation,
    Playground,
    Slum,
    Motel,
    Beach,
    Waterfront,
    Pier,
    Diner,
    Underpass,
    Dockhouse,
    ContainerYard,
    Junkyard,
    Construction,
    Pitstop,
    Backyard,
    Backalley,
    Hideout,
    Ghetto,
    Apartments,
    EnemyPosition,
    Gallery,
};

