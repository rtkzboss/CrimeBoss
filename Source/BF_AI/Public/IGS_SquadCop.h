#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadGuardians.h"
#include "IGS_SquadCop.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadCop : public AIGS_SquadGuardians {
    GENERATED_BODY()
public:
    AIGS_SquadCop(const FObjectInitializer& ObjectInitializer);

};

