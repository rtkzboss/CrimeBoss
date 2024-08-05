#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "IGS_BTTask_CoverPeekWait.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_CoverPeekWait : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UIGS_BTTask_CoverPeekWait();

};

