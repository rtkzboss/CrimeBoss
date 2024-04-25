#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_AimType.h"
#include "BTTask_SniperOrbitAroundAimPoint.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SniperOrbitAroundAimPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SnipePointKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AimType AimType;
    
public:
    UBTTask_SniperOrbitAroundAimPoint();

};

