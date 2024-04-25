#pragma once
#include "CoreMinimal.h"
#include "EIGS_CiviliansVariationType.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AICivilianBaseDataDefaults.h"
#include "IGS_AICivilianTierDef.h"
#include "IGS_AICivilianTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICivilianTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CiviliansVariationType, FIGS_AICivilianTierDef> Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICivilianBaseDataDefaults DefaultStats;
    
    FIGS_AICivilianTeamDef();
};

