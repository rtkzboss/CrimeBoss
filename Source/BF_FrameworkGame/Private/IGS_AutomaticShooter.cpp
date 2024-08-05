#include "IGS_AutomaticShooter.h"
#include "AkAudioEvent.h"
#include "EIGS_WeaponAttackType.h"
#include "ComponentInstanceDataCache.h"

UIGS_AutomaticShooter::UIGS_AutomaticShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen0(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopStart.AKE_WeaponFire_LoopStart"));
    (*this).ShootStartAudioEvent = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen1(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopBreak.AKE_WeaponFire_LoopBreak"));
    (*this).ShootStopAudioEvent = gen1.Object;
    (*this).ShooterType = EIGS_WeaponAttackType::AT_FullAuto;
    (*this).bForceFeedbackLooped = true;
}


