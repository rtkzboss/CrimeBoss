#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadHeistersBackup.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_SquadHeistersBackup : public AIGS_SquadBase {
    GENERATED_BODY()
public:
    AIGS_SquadHeistersBackup(const FObjectInitializer& ObjectInitializer);

};

