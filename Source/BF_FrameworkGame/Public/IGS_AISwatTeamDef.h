#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AISwatBaseDataDefaults.h"
#include "IGS_AISwatTiersDef.h"
#include "IGS_AISwatTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatTiersDef Tiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatBaseDataDefaults DefaultStats;
    
    FIGS_AISwatTeamDef();
};

