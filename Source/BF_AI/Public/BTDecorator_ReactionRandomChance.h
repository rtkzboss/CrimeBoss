#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_ReactionRandomChance.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_ReactionRandomChance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighIntensityChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowIntensityChance;
    
    UBTDecorator_ReactionRandomChance();

};

