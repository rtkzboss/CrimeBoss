#include "IGS_EnvQueryGenerator_Pickups.h"
#include "IGS_EnvQueryItemType_PickupActorBase.h"

UIGS_EnvQueryGenerator_Pickups::UIGS_EnvQueryGenerator_Pickups() {
    this->ItemType = UIGS_EnvQueryItemType_PickupActorBase::StaticClass();
    this->PickupType = EIGS_PickupType::Default;
}


