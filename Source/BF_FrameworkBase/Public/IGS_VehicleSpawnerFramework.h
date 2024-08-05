#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_VehicleSpawnerFramework.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_VehicleSpawnerFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_VehicleSpawnerFramework(const FObjectInitializer& ObjectInitializer);

};

