#include "IGS_AlarmDeviceBase.h"

AIGS_AlarmDeviceBase::AIGS_AlarmDeviceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bDisarmed = false;
    this->SquadID = 118999881;
    this->UnlockAfterTime = 15.00f;
}


void AIGS_AlarmDeviceBase::Disarm(AIGS_GameCharacterFramework* inUsingCharacter) {
}


