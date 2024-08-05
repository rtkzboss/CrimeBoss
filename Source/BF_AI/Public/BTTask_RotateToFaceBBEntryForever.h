#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RotateToFaceBBEntryForever.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_RotateToFaceBBEntryForever : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_RotateToFaceBBEntryForever();

};

