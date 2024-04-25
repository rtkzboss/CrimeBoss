#pragma once
#include "CoreMinimal.h"
#include "VehicleAnimInstance.h"
#include "IGS_VehicleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_VehicleAnimInstance : public UVehicleAnimInstance {
    GENERATED_BODY()
public:
    UIGS_VehicleAnimInstance();

};

