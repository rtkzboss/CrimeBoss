#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EIGS_DirectionalCueType.h"
#include "IGS_BTTask_HandleDirectionalPlayerCue.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_HandleDirectionalPlayerCue : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DirectionalCueType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
public:
    UIGS_BTTask_HandleDirectionalPlayerCue();

};

