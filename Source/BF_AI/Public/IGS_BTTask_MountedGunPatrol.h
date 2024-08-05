#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_MountedGunPatrol.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API UIGS_BTTask_MountedGunPatrol : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_MountedGunPatrol();

};

