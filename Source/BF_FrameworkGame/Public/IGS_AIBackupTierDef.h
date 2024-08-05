#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBackupBaseDataModifiers.h"
#include "IGS_AIBaseTierDef.h"
#include "IGS_AIBackupTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupTierDef : public FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBackupBaseDataModifiers Stats;
    
    FIGS_AIBackupTierDef();
};

