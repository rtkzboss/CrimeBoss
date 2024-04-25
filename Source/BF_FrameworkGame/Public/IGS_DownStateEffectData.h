#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_DownStateEffectData.generated.h"

class UIGS_DownStateEffectDataAsset;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_DownStateEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_DownStateEffectDataAsset* DownStateEffectDataAsset;
    
    FIGS_DownStateEffectData();
};

