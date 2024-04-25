#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_IdleAvoidanceManager.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_IdleAvoidanceManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_IdleAvoidanceManager();

};

