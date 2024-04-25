#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RoomType : uint8 {
    Lobby,
    Toilets,
    Office,
    Vault,
    Kitchen,
    IT_Support,
    SecurityOffice,
    ElectricRoom,
    Tellers,
    Hallway,
    Stairs,
    ManagersOffice,
    Accounting,
    Archives,
    Conference,
    Supplies,
    Storage,
    Elevator,
    Roof,
    Street,
};

