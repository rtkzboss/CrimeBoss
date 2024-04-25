#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_RotateFromWall.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_RotateFromWall : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LookPosKey;
    
    UIGS_BTTask_RotateFromWall();

};

