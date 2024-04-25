#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_Speed.h"
#include "BTDecorator_IsMovementSpeed.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsMovementSpeed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_Speed Speed;
    
    UBTDecorator_IsMovementSpeed();

};

