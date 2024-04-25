#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_EvaluateScriptedBehavior.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_EvaluateScriptedBehavior : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PickupBagKey;
    
    UIGS_BTService_EvaluateScriptedBehavior();

};

