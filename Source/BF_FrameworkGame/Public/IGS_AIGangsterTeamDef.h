#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterVariationType.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AIGangsterBaseDataDefaults.h"
#include "IGS_AIGangsterTiersDef.h"
#include "IGS_AIGangsterTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterTiersDef Tiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterBaseDataDefaults DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GangsterVariationType Variation;
    
    FIGS_AIGangsterTeamDef();
};

