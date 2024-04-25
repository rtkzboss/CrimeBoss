#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSniperTierData.h"
#include "IGS_AIBackupSniperTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupSniperTierData : public FIGS_AIBaseSniperTierData {
    GENERATED_BODY()
public:
    FIGS_AIBackupSniperTierData();
};

