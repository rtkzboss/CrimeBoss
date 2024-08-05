#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_OffenceIsSurprised.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_OffenceIsSurprised : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
public:
    UIGS_BTDecorator_OffenceIsSurprised();

};

