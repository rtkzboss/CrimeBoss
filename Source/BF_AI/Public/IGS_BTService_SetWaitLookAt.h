#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SetWaitLookAt.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_SetWaitLookAt : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutLookPos;
    
public:
    UIGS_BTService_SetWaitLookAt();

};

