#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_GameplayTagsCacheSubsystem.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UIGS_GameplayTagsCacheSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_GameplayTagsCacheSubsystem();

};

