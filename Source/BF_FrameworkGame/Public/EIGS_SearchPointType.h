#pragma once
#include "CoreMinimal.h"
#include "EIGS_SearchPointType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SearchPointType : uint8 {
    Generic,
    Safe,
    Vault,
    Window,
    Camera,
    Weapon,
    Contraband,
    Medkit,
    Civilian,
    Employee,
    Drill,
    Hostage,
};

