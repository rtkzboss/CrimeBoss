#include "IGS_AudioSubsystem.h"
#include "IGS_AkVoiceInputComponent.h"
#include "IGS_PersistentAkComponent.h"

UIGS_AudioSubsystem::UIGS_AudioSubsystem() {
    this->PersistenAudioAkComponent = CreateDefaultSubobject<UIGS_PersistentAkComponent>(TEXT("PersistentAkComponent"));
    this->VoiceInputComponent = CreateDefaultSubobject<UIGS_AkVoiceInputComponent>(TEXT("VoiceInputAkComp"));
    this->Data = NULL;
}

void UIGS_AudioSubsystem::OnControllerHeadphonesConnectionChanged(bool inIsConnected) {
}


