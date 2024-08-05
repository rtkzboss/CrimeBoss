#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_CallWalkieTalkieBase.h"
#include "BTTask_CallWalkieTalkie.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_CallWalkieTalkie : public UBTTask_CallWalkieTalkieBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
public:
    UBTTask_CallWalkieTalkie();

};

