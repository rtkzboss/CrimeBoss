#pragma once
#include "CoreMinimal.h"
#include "EIGS_AISpawnAnimaitonVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_AISpawnAnimaitonVariant : uint8 {
    SP_Unknown = 255,
    SP_Window = 0,
    SP_Wall,
    SP_Rope,
    SP_Ceiling,
};

