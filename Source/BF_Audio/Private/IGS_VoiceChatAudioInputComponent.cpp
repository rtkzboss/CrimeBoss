#include "IGS_VoiceChatAudioInputComponent.h"
#include "AkAudioEvent.h"
#include "ComponentInstanceDataCache.h"

UIGS_VoiceChatAudioInputComponent::UIGS_VoiceChatAudioInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen645(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Voice/AKE_VoiceChat.AKE_VoiceChat"));
    (*this).AkAudioEvent = gen645.Object;
    (*this).PrimaryComponentTick.bCanEverTick = false;
}


