#pragma once
#include "CoreMinimal.h"
#include "EIGS_CopsVariationType.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AICopBaseDataDefaults.h"
#include "IGS_AICopTierDef.h"
#include "IGS_AICopTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICopTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_CopsVariationType, FIGS_AICopTierDef> Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICopBaseDataDefaults DefaultStats;
    
    FIGS_AICopTeamDef();
};

