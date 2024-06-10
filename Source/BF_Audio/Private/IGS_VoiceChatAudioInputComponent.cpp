#include "IGS_VoiceChatAudioInputComponent.h"
#include "AkAudioEvent.h"
#include "ComponentInstanceDataCache.h"

UIGS_VoiceChatAudioInputComponent::UIGS_VoiceChatAudioInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen0(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Voice/AKE_VoiceChat.AKE_VoiceChat"));
    (*this).AkAudioEvent = gen0.Object;
    (*this).PrimaryComponentTick.bCanEverTick = false;
}


