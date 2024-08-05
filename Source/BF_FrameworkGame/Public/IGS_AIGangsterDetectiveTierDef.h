#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGangsterDetectiveTierData.h"
#include "IGS_AIGangsterTierDef.h"
#include "IGS_AIGangsterDetectiveTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterDetectiveTierDef : public FIGS_AIGangsterTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterDetectiveTierData SpecStats;
    
    FIGS_AIGangsterDetectiveTierDef();
};

