#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadGuardians.h"
#include "IGS_SquadGangster.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadGangster : public AIGS_SquadGuardians {
    GENERATED_BODY()
public:
    AIGS_SquadGangster(const FObjectInitializer& ObjectInitializer);

};

