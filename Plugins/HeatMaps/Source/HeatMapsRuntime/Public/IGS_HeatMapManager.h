#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_HeatMapManager.generated.h"

UCLASS(Blueprintable)
class HEATMAPSRUNTIME_API UIGS_HeatMapManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_HeatMapManager();

};

