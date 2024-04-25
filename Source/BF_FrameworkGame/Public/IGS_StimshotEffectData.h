#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerEffectData.h"
#include "IGS_StimshotEffectData.generated.h"

class UIGS_StimshotEffectDataAsset;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_StimshotEffectData : public FIGS_PlayerEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_StimshotEffectDataAsset* StimshotEffectDataAsset;
    
    FIGS_StimshotEffectData();
};

