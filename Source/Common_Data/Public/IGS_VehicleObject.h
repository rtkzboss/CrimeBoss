#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_VehicleObject.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_VehicleObject : public UObject {
    GENERATED_BODY()
public:
    UIGS_VehicleObject();

};

