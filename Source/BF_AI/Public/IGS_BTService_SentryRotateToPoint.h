#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SentryRotateToPoint.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_SentryRotateToPoint : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetPoint;
    
public:
    UIGS_BTService_SentryRotateToPoint();

};

