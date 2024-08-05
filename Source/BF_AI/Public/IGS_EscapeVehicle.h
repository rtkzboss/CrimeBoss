#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleCar.h"
#include "IGS_EscapeVehicle.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_EscapeVehicle : public AIGS_VehicleCar {
    GENERATED_BODY()
public:
    AIGS_EscapeVehicle(const FObjectInitializer& ObjectInitializer);

};

