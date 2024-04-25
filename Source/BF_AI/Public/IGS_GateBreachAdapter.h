#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GateExplosiveInfo.h"
#include "IGS_GateBreachAdapter.generated.h"

class AActor;
class AIGS_RoomBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_GateBreachAdapter : public UObject {
    GENERATED_BODY()
public:
    UIGS_GateBreachAdapter();

    UFUNCTION(BlueprintCallable)
    static FGateExplosiveInfo GetExplosivePoint(AActor* Actor, AIGS_RoomBase* priorRoom);
    
};

