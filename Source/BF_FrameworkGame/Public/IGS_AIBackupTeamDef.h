#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBackupBaseDataDefaults.h"
#include "IGS_AIBackupTiersDef.h"
#include "IGS_AIBaseTeamDef.h"
#include "IGS_AIBackupTeamDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupTeamDef : public FIGS_AIBaseTeamDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBackupTiersDef Tiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBackupBaseDataDefaults DefaultStats;
    
    FIGS_AIBackupTeamDef();
};

