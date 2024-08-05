#pragma once
#include "CoreMinimal.h"
#include "IGS_PropActorBase.h"
#include "IGS_PropActor.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API AIGS_PropActor : public AIGS_PropActorBase {
    GENERATED_BODY()
public:
    AIGS_PropActor(const FObjectInitializer& ObjectInitializer);

};

