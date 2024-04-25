#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_MovableVehicleGroupDatabase.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_MovableVehicleGroupDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MovableVehicleGroupDatabase();

};

