#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_BreachPointsHelper.generated.h"

class AActor;
class AIGS_BreachPointsBase;
class AIGS_RoomBase;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BreachPointsHelper : public UObject {
    GENERATED_BODY()
public:
    UIGS_BreachPointsHelper();

    UFUNCTION(BlueprintCallable)
    static AIGS_BreachPointsBase* GetBreachPoints(AActor* Actor, AIGS_RoomBase* priorRoom);
    
};

