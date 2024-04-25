#pragma once
#include "CoreMinimal.h"
#include "EMETA_LobbyVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EMETA_LobbyVisibilityType : uint8 {
    Unknown,
    Public,
    Private,
};

