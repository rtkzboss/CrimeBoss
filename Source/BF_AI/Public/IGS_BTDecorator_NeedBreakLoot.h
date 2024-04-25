#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTDecorator_Base.h"
#include "IGS_BTDecorator_NeedBreakLoot.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_NeedBreakLoot : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BestLootingCollection;
    
public:
    UIGS_BTDecorator_NeedBreakLoot();

};

