#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_BTService_MinigunnerHandleShooting.generated.h"

class UIGS_WieldableInventoryObjectBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_MinigunnerHandleShooting : public UBTService {
    GENERATED_BODY()
public:
    UIGS_BTService_MinigunnerHandleShooting();

private:
    UFUNCTION(BlueprintCallable)
    void OnWieldableAdded(UIGS_WieldableInventoryObjectBase* inObject, EIGS_WieldableSlot inSlot);
    
};

