#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTierDef.h"
#include "IGS_AIGuardBaseDataModifiers.h"
#include "IGS_AIGuardTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGuardTierDef : public FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGuardBaseDataModifiers Stats;
    
    FIGS_AIGuardTierDef();
};

