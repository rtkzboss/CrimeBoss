#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadEmployee.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadEmployee : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadEmployee(const FObjectInitializer& ObjectInitializer);

};

