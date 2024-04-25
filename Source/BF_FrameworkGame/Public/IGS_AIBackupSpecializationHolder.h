#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBackupDefaultTierDef.h"
#include "IGS_AIBackupHeavyTierDef.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AIBackupSpecializationHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBackupDefaultTierDef Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIBackupHeavyTierDef Heavy;
    
    FIGS_AIBackupSpecializationHolder();
};

