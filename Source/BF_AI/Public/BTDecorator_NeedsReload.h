#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_NeedsReload.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_NeedsReload : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_NeedsReload();

};

