#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "IGS_BTTask_MoveToAsync.generated.h"

UCLASS(Blueprintable)
class UIGS_BTTask_MoveToAsync : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHierarchicalPathfinding: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDontUsePathLengthLimiter: 1;
    
public:
    UIGS_BTTask_MoveToAsync();

};

