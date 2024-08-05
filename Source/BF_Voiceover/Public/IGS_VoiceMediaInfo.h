#pragma once
#include "CoreMinimal.h"
#include "IGS_VoiceMediaInfo.generated.h"

class UAkExternalMediaAsset;

USTRUCT(BlueprintType)
struct FIGS_VoiceMediaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkExternalMediaAsset* VoiceAkExternalMediaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceMediaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceFilenameLength;
    
    BF_VOICEOVER_API FIGS_VoiceMediaInfo();
};

