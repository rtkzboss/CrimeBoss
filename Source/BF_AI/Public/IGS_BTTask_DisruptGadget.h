#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_DisruptGadget.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_DisruptGadget : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DisruptingGadget;
    
public:
    UIGS_BTTask_DisruptGadget();

};

