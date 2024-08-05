#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_DutyReaction.h"
#include "BTTask_AlertCharacter.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_AlertCharacter : public UBTTask_DutyReaction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CharacterToAlert;
    
public:
    UBTTask_AlertCharacter();

};

