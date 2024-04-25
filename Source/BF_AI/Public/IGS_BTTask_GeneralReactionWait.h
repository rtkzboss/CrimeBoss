#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "EIGS_GRWaitType.h"
#include "IGS_BTTask_GeneralReactionWait.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_GeneralReactionWait : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GRWaitType Type;
    
    UIGS_BTTask_GeneralReactionWait();

};

