#pragma once
#include "CoreMinimal.h"
#include "Abilities/Async/AbilityAsync.h"
#include "IGS_InterestPointHolder.h"
#include "IGS_AbilityAsync_Lerp.generated.h"

class AActor;
class UIGS_AbilityAsync_Lerp;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_AbilityAsync_Lerp : public UAbilityAsync {
    GENERATED_BODY()
public:
    UIGS_AbilityAsync_Lerp();

    UFUNCTION(BlueprintCallable)
    static UIGS_AbilityAsync_Lerp* LerpToLocation(AActor* TargetActor, FIGS_InterestPointHolder InPos, FIGS_InterestPointHolder inLookAtPos, float inSpeed, float inMinDistance, float inLookSpeed);
    
};

