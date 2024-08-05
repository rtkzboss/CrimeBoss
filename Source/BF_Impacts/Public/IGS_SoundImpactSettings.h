#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.h"
#include "IGS_SoundImpactSettings.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_SoundImpactSettings : public FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AkAudioEventPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundMaxLength;
    
    FIGS_SoundImpactSettings();
};

