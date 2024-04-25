#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_WasAlreadyPanicking.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_WasAlreadyPanicking : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_WasAlreadyPanicking();

};

