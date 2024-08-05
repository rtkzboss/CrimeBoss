#pragma once
#include "CoreMinimal.h"
#include "IGS_TacticalPathfindingEdge.generated.h"

class UTacticalPathfindingNode;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_TacticalPathfindingEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTacticalPathfindingNode*> TresspasingNodes;
    
    FIGS_TacticalPathfindingEdge();
};

