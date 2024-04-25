#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CivOffenceReactionBehavior.h"
#include "IGS_BTDecorator_OffenceAmbientReaction.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_OffenceAmbientReaction : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_CivOffenceReactionBehavior DesiredBehavior;
    
public:
    UIGS_BTDecorator_OffenceAmbientReaction();

};

