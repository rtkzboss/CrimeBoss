#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_SquadSwatMode.h"
#include "BTDecorator_HasSwatSquadMode.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasSwatSquadMode : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SquadSwatMode SwatMode;
    
public:
    UBTDecorator_HasSwatSquadMode();

};

