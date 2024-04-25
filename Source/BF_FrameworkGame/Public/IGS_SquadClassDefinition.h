#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_SquadClassDefinition.generated.h"

class AIGS_SquadFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SquadClassDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_SquadFramework> Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnitSpecialization, TSoftClassPtr<AIGS_SquadFramework>> UnitSpecializationOverride;
    
    FIGS_SquadClassDefinition();
};

