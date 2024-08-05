#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "IGS_BTDecorator_IsTimeFromLastMove.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_IsTimeFromLastMove : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
public:
    UIGS_BTDecorator_IsTimeFromLastMove();

};

