#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuCategory : uint8 {
    UNKNOWN = 255,
    BigHeists = 0,
    Forts = 4,
    SmallHit = 8,
    NonHubSmallHits = 12,
    Stealth = 16,
    CharacterMission = 20,
    Others = 32,
    Test = 254,
};

