#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_GRWaitType.h"
#include "IGS_GeneralReactionsDef.h"
#include "IGS_GeneralReactionsDefsHolder.h"
#include "IGS_GeneralReactionSpecHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_GeneralReactionSpecHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef> ReactionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnitSpecialization, FIGS_GeneralReactionsDefsHolder> SpecOverrides;
    
    FIGS_GeneralReactionSpecHolder();
};

