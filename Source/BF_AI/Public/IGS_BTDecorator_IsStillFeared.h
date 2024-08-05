#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTDecorator_IsStillFeared.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTDecorator_IsStillFeared : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DesiredTimeWithoutFear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DesiredTimeWithoutFearZiptieAddon;
    
public:
    UIGS_BTDecorator_IsStillFeared();

};

