#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"
#include "BTTask_InterpolateTo.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_InterpolateTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CharacterVsHeistersCollisionStatus MovingCharacterVsHeistersCollisionStatus;
    
public:
    UBTTask_InterpolateTo();

};

