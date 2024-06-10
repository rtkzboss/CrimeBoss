#include "IGS_AutomaticShooter.h"
#include "AkAudioEvent.h"
#include "EIGS_WeaponAttackType.h"
#include "ComponentInstanceDataCache.h"

UIGS_AutomaticShooter::UIGS_AutomaticShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen586(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopStart.AKE_WeaponFire_LoopStart"));
    (*this).ShootStartAudioEvent = gen586.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen587(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopBreak.AKE_WeaponFire_LoopBreak"));
    (*this).ShootStopAudioEvent = gen587.Object;
    (*this).ShooterType = EIGS_WeaponAttackType::AT_FullAuto;
    (*this).bForceFeedbackLooped = true;
}


