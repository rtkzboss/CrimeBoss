#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "IGS_BTService_SolveTargetProximity.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_SolveTargetProximity : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DEBUG_Enabled;
    
public:
    UIGS_BTService_SolveTargetProximity();

};

