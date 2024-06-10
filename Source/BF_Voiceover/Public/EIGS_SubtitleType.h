#pragma once
#include "CoreMinimal.h"
#include "EIGS_SubtitleType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SubtitleType : uint8 {
    None,
    HeisterImportant,
    HeisterNonImportant,
    Custom,
};

