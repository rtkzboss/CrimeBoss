#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseDefaultTierData.h"
#include "IGS_AIBackupDefaultTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupDefaultTierData : public FIGS_AIBaseDefaultTierData {
    GENERATED_BODY()
public:
    FIGS_AIBackupDefaultTierData();
};

