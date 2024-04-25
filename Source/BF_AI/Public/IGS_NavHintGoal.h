#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "IGS_NavHintGoal.generated.h"

class AAIController;

UCLASS(Blueprintable, NotPlaceable, Transient)
class BF_AI_API AIGS_NavHintGoal : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* Querier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
public:
    AIGS_NavHintGoal(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

