#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_AIDirectorTacticForCharacter.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTService_AIDirectorTacticForCharacter : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector WaveManagerTacticKey;
    
public:
    UBTService_AIDirectorTacticForCharacter();

};

