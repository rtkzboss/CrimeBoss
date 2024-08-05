#include "IGS_BurstShooter.h"
#include "AkAudioEvent.h"
#include "EIGS_WeaponAttackType.h"
#include "ComponentInstanceDataCache.h"

UIGS_BurstShooter::UIGS_BurstShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen0(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Burst2.AKE_WeaponFire_Burst2"));
    (*this).Burst2ShotAudioEvent = gen0.Object;
    static ConstructorHelpers::FObjectFinder<UAkAudioEvent> gen1(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Burst3.AKE_WeaponFire_Burst3"));
    (*this).Burst3ShotAudioEvent = gen1.Object;
}


