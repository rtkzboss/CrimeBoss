#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SentryRotateToActor.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_SentryRotateToActor : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActor;
    
public:
    UIGS_BTService_SentryRotateToActor();

};

