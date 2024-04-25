#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsThreatIncreasing.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsThreatIncreasing : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInterval;
    
public:
    UBTDecorator_IsThreatIncreasing();

};

