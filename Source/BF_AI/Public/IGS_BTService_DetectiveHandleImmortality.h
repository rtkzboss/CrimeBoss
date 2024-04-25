#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_DetectiveHandleImmortality.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_DetectiveHandleImmortality : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ReviveChargesKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DetectiveInitKey;
    
    UIGS_BTService_DetectiveHandleImmortality();

};

