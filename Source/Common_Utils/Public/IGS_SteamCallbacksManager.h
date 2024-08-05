#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_SteamCallbacksManager.generated.h"

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_SteamCallbacksManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_SteamCallbacksManager();

};

