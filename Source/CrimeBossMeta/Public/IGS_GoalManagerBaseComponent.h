#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMETA_Partner.h"
#include "Templates/SubclassOf.h"
#include "IGS_GoalManagerBaseComponent.generated.h"

class UMETA_BaseGoal;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_GoalManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_GoalManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectNewGoal(TSubclassOf<UMETA_BaseGoal> inGoalID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetGoalsPoolByPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetGoalsPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetActiveGoalsByPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_BaseGoal*> GetActiveGoals();
    
};

