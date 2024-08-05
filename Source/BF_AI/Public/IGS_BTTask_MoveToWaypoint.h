#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToWaypoint.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_MoveToWaypoint : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector WaypointKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector IsApproachMoveKey;
    
public:
    UIGS_BTTask_MoveToWaypoint();

};

