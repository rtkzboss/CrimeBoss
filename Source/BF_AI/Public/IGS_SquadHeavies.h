#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadHeavies.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadHeavies : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadHeavies(const FObjectInitializer& ObjectInitializer);

};

