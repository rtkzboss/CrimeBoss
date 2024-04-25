#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_IsPreviousGeneralReaction.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsPreviousGeneralReaction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreviousGlobalReactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeSince;
    
    UBTDecorator_IsPreviousGeneralReaction();

};

