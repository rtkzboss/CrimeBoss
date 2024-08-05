#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_HaveTicketToMoveInspectOffence.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HaveTicketToMoveInspectOffence : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
public:
    UBTDecorator_HaveTicketToMoveInspectOffence();

};

