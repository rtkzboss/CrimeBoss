#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_VehicleDestinationAreaFramework.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_VehicleDestinationAreaFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_VehicleDestinationAreaFramework(const FObjectInitializer& ObjectInitializer);

};

