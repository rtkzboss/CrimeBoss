#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "META_PlanningBoardRow.h"
#include "META_PlanningBoardDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_PlanningBoardDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_PlanningBoardDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_PlanningBoardRow GetPlanningBoardData(UObject* inWCO, const FGameplayTag inPlanningBoardID, bool& outSucceeded);
    
};

