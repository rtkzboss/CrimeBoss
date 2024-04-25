#pragma once
#include "CoreMinimal.h"
#include "IGS_AILoadoutHolder.h"
#include "IGS_AIUnitBaseDataDefaults.h"
#include "IGS_AIBaseUnitDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBaseUnitDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitBaseDataDefaults Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AILoadoutHolder Loadout;
    
    FIGS_AIBaseUnitDef();
};

