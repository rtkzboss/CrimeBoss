#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBackupTierDef.h"
#include "IGS_AIBackupDefaultTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupDefaultTierDef : public FIGS_AIBackupTierDef {
    GENERATED_BODY()
public:
    FIGS_AIBackupDefaultTierDef();
};

