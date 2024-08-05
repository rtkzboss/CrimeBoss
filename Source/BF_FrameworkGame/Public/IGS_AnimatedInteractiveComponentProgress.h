#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_AnimatedInteractiveComponentProgress.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentProgress : public UIGS_AnimatedInteractiveComponentSimple {
    GENERATED_BODY()
public:
    UIGS_AnimatedInteractiveComponentProgress(const FObjectInitializer& ObjectInitializer);

};

