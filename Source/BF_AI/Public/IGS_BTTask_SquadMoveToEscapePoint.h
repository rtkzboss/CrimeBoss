#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadMoveToEscapePoint.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadMoveToEscapePoint : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EscapePointKey;
    
public:
    UIGS_BTTask_SquadMoveToEscapePoint();

};

