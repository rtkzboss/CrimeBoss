#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToMelee.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_MoveToMelee : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BattleTarget;
    
public:
    UIGS_BTTask_MoveToMelee();

};

