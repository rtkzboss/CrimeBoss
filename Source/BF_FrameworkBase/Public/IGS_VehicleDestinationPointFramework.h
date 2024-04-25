#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_VehicleDestinationPointFramework.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_VehicleDestinationPointFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_VehicleDestinationPointFramework(const FObjectInitializer& ObjectInitializer);

};

