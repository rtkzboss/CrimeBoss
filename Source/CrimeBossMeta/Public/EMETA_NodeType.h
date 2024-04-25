#pragma once
#include "CoreMinimal.h"
#include "EMETA_NodeType.generated.h"

UENUM(BlueprintType)
enum class EMETA_NodeType : uint8 {
    None,
    Root,
    Actions,
    Conditions,
    Media,
    Subgraph,
    ShowNotificationNode,
    End,
    Branch,
    RandomBranch,
    Timer,
    UnaryOperation,
    Callback,
    CategorySequence,
    TaskNode,
    ParallelizationNode,
    LoopBranch,
    Switch,
};

