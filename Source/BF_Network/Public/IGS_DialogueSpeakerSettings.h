#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_DialogueSpeakerSettings.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FIGS_DialogueSpeakerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayVoiceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishVoiceExtraDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SpeakerAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_DialogueGroupCharacterHolder, UAkSwitchValue*> SpeakerCharacterAkSwitchMap;
    
    BF_NETWORK_API FIGS_DialogueSpeakerSettings();
};

