#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_WantsCover.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_WantsCover : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreathTreshold;
    
public:
    UBTDecorator_WantsCover();

};

