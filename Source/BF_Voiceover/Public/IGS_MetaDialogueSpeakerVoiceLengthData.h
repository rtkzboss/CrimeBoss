#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaDialogueSpeakerVoiceLengthData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_MetaDialogueSpeakerVoiceLengthData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinesCount;
    
    FIGS_MetaDialogueSpeakerVoiceLengthData();
};

