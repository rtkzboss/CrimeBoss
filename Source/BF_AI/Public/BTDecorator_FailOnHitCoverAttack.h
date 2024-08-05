#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_FailOnHit.h"
#include "BTDecorator_FailOnHitCoverAttack.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_FailOnHitCoverAttack : public UBTDecorator_FailOnHit {
    GENERATED_BODY()
public:
    UBTDecorator_FailOnHitCoverAttack();

};

