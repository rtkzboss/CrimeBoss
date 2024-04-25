#include "IGS_MusicPlayer.h"
#include "AkComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_MusicPlayer::AIGS_MusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->PlayerMesh = (UStaticMeshComponent*)RootComponent;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->StartSongAkEvent = NULL;
    this->StopSongAkEvent = NULL;
    this->StreamerModeAkEvent = NULL;
    this->IsDestroyable = false;
    this->PlayOnStart = true;
    this->StopScenicMusicOnStart = true;
    this->StopWhenAlarm = true;
    this->PlayerTypeSwitch = NULL;
    this->mR_bIsDestroyed = false;
    this->AkComponent->SetupAttachment(RootComponent);
}

void AIGS_MusicPlayer::StopMusic() {
}

void AIGS_MusicPlayer::StartMusic() {
}

void AIGS_MusicPlayer::OnSongDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void AIGS_MusicPlayer::OnRep_PlayerDestroyed() {
}

void AIGS_MusicPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_MusicPlayer, mR_bIsDestroyed);
}


