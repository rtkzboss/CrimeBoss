#pragma once
#include "CoreMinimal.h"
#include "GenericGraph.h"
#include "META_BaseStoryGraph.generated.h"

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_BaseStoryGraph : public UGenericGraph {
    GENERATED_BODY()
public:
    UMETA_BaseStoryGraph();

};

