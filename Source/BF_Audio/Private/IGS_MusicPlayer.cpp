#include "IGS_MusicPlayer.h"
#include "AkComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_MusicPlayer::AIGS_MusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).PlayOnStart = true;
    (*this).StopScenicMusicOnStart = true;
    (*this).StopWhenAlarm = true;
    (*this).RootComponent = (USceneComponent*)PlayerMesh;
    (*this).AkComponent->SetupAttachment((*this).PlayerMesh);
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


