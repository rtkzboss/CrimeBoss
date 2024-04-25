#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadCivlian.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadCivlian : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadCivlian(const FObjectInitializer& ObjectInitializer);

};

