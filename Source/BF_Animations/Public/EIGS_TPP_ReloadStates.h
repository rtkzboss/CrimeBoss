#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_ReloadStates.generated.h"

UENUM(BlueprintType)
enum class EIGS_TPP_ReloadStates : uint8 {
    Is_Not_Reloading,
    Reload_Start,
    Reload_Out,
    Reload_Interrupted,
    Reload_Interrupted_By_Shooting,
    Reload_Interrupted_By_Equipping,
};

