#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandState.h"
#include "BTDecorator_AICommandState.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_AICommandState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AICommandState CommandState;
    
    UBTDecorator_AICommandState();

};

