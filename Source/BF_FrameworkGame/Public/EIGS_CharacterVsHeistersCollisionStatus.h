#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.generated.h"

UENUM(BlueprintType)
enum class EIGS_CharacterVsHeistersCollisionStatus : uint8 {
    None,
    CharacterIgnoringPlayers,
    PlayersIgnoringCharacters,
    IgnoringEachOther,
};

