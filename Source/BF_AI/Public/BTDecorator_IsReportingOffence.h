#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsReportingOffence.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsReportingOffence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsReportingOffence();

};

