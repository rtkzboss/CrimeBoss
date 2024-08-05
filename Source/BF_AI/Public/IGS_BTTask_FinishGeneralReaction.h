#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "IGS_BTTask_FinishGeneralReaction.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_FinishGeneralReaction : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UIGS_BTTask_FinishGeneralReaction();

};

