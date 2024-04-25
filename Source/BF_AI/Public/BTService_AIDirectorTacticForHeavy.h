#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_AIDirectorTacticForHeavy.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTService_AIDirectorTacticForHeavy : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector WaveManagerTacticKey;
    
    UBTService_AIDirectorTacticForHeavy();

};

