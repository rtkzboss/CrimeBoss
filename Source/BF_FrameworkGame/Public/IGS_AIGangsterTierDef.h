#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTierDef.h"
#include "IGS_AIGangsterBaseDataModifiers.h"
#include "IGS_AIGangsterTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterTierDef : public FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterBaseDataModifiers Stats;
    
    FIGS_AIGangsterTierDef();
};

