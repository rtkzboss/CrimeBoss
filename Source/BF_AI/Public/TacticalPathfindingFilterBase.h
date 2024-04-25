#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TacticalPathfindingFilterBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API UTacticalPathfindingFilterBase : public UObject {
    GENERATED_BODY()
public:
    UTacticalPathfindingFilterBase();

};

