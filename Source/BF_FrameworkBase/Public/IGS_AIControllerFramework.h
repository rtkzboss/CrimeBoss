#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GameplayTagContainer.h"
#include "IGS_AIControllerFramework.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_AIControllerFramework : public AAIController {
    GENERATED_BODY()
public:
    AIGS_AIControllerFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestGeneralReaction(FGameplayTag inReactionTag, AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    void EnableAI(bool InValue);
    
};

