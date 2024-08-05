#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_OffenceReactionType.h"
#include "BTDecorator_OffenceType.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_OffenceType : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_OffenceReactionType DesiredOffenceReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
public:
    UBTDecorator_OffenceType();

};

