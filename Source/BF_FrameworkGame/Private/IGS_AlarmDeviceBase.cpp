#include "IGS_AlarmDeviceBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_AlarmDeviceBase::AIGS_AlarmDeviceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AnimationRotationOffset.Yaw = -1.800000000e+02f;
    (*this).SquadID = 118999881;
    (*this).UnlockAfterTime = 1.500000000e+01f;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
}


void AIGS_AlarmDeviceBase::Disarm(AIGS_GameCharacterFramework* inUsingCharacter) {
}


