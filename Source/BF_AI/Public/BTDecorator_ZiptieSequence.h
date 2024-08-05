#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ZiptieSequence.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_ZiptieSequence : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CivToZiptieKey;
    
public:
    UBTDecorator_ZiptieSequence();

};

