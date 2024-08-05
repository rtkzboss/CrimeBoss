#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_AICommandState.h"
#include "BTDecorator_SOCommandState.generated.h"

class UIGS_AICommand;

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_SOCommandState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AICommandState CommandState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* Command;
    
public:
    UBTDecorator_SOCommandState();

};

