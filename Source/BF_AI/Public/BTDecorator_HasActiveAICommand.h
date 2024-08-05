#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandType.h"
#include "BTDecorator_HasActiveAICommand.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasActiveAICommand : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AICommandType commandType;
    
public:
    UBTDecorator_HasActiveAICommand();

};

