#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_BTTask_ThrowBase.h"
#include "IGS_BTTask_ThrowThrowableAI.generated.h"

class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_ThrowThrowableAI : public UIGS_BTTask_ThrowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_ThrowableInventoryObject> Throwable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThrowTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AfterFireCooldownTag;
    
    UIGS_BTTask_ThrowThrowableAI();

};

