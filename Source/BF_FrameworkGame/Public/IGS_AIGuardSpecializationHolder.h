#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AIGuardDefaultTierDef.h"
#include "IGS_AIGuardSpecializationHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGuardSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGuardDefaultTierDef Default;
    
    FIGS_AIGuardSpecializationHolder();
};

