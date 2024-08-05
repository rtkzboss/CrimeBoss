#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_ThrowBase.h"
#include "IGS_BTTask_ThrowThrowableAICommand.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_ThrowThrowableAICommand : public UIGS_BTTask_ThrowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
    UIGS_BTTask_ThrowThrowableAICommand();

};

