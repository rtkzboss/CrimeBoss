#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadShielder.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadShielder : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadShielder(const FObjectInitializer& ObjectInitializer);

};

