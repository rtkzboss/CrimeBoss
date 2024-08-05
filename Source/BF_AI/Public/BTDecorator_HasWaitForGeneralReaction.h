#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_GRWaitType.h"
#include "BTDecorator_HasWaitForGeneralReaction.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasWaitForGeneralReaction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GRWaitType Type;
    
    UBTDecorator_HasWaitForGeneralReaction();

};

