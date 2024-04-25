#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "IGS_AkVoiceInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AUDIOBASE_API UIGS_AkVoiceInputComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    UIGS_AkVoiceInputComponent(const FObjectInitializer& ObjectInitializer);

};

