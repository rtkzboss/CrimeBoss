#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "IGS_BTTask_SetReactionCooldowns.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SetReactionCooldowns : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReactionCooldownTag;
    
    UIGS_BTTask_SetReactionCooldowns();

};

