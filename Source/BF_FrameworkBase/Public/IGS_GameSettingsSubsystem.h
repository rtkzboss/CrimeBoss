#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_GameSettingsSubsystem.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GameSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_GameSettingsSubsystem();

};

