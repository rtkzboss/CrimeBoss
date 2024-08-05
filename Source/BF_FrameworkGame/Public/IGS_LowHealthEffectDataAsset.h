#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_LowHealthEffectDataAsset.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UMaterialInterface;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_LowHealthEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LowHealthPostProcessInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> LowHealthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> EffectStartAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> EffectStopAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkRtpc> EffectAkRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsoluteLowHealthThreshold;
    
    UIGS_LowHealthEffectDataAsset();

};

