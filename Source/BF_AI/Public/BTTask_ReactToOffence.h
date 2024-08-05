#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "BTTask_ReactToOffence.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_ReactToOffence : public UBTTaskNode, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
    UBTTask_ReactToOffence();


    // Fix for true pure virtual functions not being implemented
};

