#include "IGS_LocalPlayerVoiceChat.h"
#include "IGS_VoiceChatAudioInputComponent.h"

UIGS_LocalPlayerVoiceChat::UIGS_LocalPlayerVoiceChat() {
    this->m_WwiseInputComponent = CreateDefaultSubobject<UIGS_VoiceChatAudioInputComponent>(TEXT("LocalPlayerVoiceChatInputComponent"));
}


