#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadSniper.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadSniper : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadSniper(const FObjectInitializer& ObjectInitializer);

};

