#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadGuardians.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadGuardians : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadGuardians(const FObjectInitializer& ObjectInitializer);

};

