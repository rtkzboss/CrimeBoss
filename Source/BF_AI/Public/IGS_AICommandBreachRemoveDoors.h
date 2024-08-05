#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommandBreachRemoveObstacle.h"
#include "IGS_AICommandBreachRemoveDoors.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandBreachRemoveDoors : public UIGS_AICommandBreachRemoveObstacle {
    GENERATED_BODY()
public:
    UIGS_AICommandBreachRemoveDoors();

};

