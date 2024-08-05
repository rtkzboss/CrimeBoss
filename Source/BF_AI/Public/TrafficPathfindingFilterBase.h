#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrafficPathfindingFilterBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API UTrafficPathfindingFilterBase : public UObject {
    GENERATED_BODY()
public:
    UTrafficPathfindingFilterBase();

};

