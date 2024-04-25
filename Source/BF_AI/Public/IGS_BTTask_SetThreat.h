#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_SetThreat.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SetThreat : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UIGS_BTTask_SetThreat();

};

