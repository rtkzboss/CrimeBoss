#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrafficPathfindingEdge.generated.h"

class UTrafficPathfindingNode;

UCLASS(Blueprintable)
class BF_AI_API UTrafficPathfindingEdge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrafficPathfindingNode* FromNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrafficPathfindingNode* ToNode;
    
    UTrafficPathfindingEdge();

};

