#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_VehicleGroupDatabase.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_VehicleGroupDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_VehicleGroupDatabase();

};

