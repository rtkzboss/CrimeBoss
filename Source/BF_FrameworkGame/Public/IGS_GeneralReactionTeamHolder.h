#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_GRWaitType.h"
#include "IGS_GeneralReactionSpecHolder.h"
#include "IGS_GeneralReactionsDef.h"
#include "IGS_GeneralReactionTeamHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_GeneralReactionTeamHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef> Defaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_TeamSideEnum, FIGS_GeneralReactionSpecHolder> TeamOverrides;
    
    FIGS_GeneralReactionTeamHolder();
};

