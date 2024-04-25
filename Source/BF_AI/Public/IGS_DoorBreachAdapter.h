#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EntryPoints.h"
#include "ExitPoints.h"
#include "IGS_DoorBreachAdapter.generated.h"

class AActor;
class AIGS_RoomBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_DoorBreachAdapter : public UObject {
    GENERATED_BODY()
public:
    UIGS_DoorBreachAdapter();

    UFUNCTION(BlueprintCallable)
    static FExitPoints GetExitPoints(AActor* Actor, AIGS_RoomBase* priorRoom);
    
    UFUNCTION(BlueprintCallable)
    static FEntryPoints GetEnterPoints(AActor* Actor, AIGS_RoomBase* priorRoom);
    
};

