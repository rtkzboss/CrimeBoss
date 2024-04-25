#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_WaypointFramework.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_WaypointFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_WaypointFramework(const FObjectInitializer& ObjectInitializer);

};

