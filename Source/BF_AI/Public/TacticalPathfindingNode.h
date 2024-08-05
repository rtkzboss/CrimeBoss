#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_TacticalPathfindingEdge.h"
#include "TacticalPathfindingNode.generated.h"

class UTacticalPathfindingNode;

UCLASS(Abstract, Blueprintable)
class BF_AI_API UTacticalPathfindingNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTacticalPathfindingNode*, FIGS_TacticalPathfindingEdge> Edges;
    
    UTacticalPathfindingNode();

};

