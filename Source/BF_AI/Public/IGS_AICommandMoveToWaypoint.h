#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommandMoveTo.h"
#include "IGS_AICommandMoveToWaypoint.generated.h"

class AIGS_WaypointBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandMoveToWaypoint : public UIGS_AICommandMoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_WaypointBase> Waypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApproachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExactPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsApproachMove;
    
    UIGS_AICommandMoveToWaypoint();

};

