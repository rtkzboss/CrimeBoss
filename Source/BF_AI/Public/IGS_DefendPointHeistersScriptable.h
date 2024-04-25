#pragma once
#include "CoreMinimal.h"
#include "IGS_DefendPointBase.h"
#include "IGS_DefendPointHeistersScriptable.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_DefendPointHeistersScriptable : public AIGS_DefendPointBase {
    GENERATED_BODY()
public:
    AIGS_DefendPointHeistersScriptable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

