#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ObjectiveScenarioBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ObjectiveScenarioBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_ObjectiveScenarioBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesReadyEvent();
    
};

