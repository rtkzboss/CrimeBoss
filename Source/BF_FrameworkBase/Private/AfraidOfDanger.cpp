#include "AfraidOfDanger.h"

FAfraidOfDanger::FAfraidOfDanger() {
    (*TBaseStructure<FGenericTeamId>::Get()->FindPropertyByName("TeamID")->ContainerPtrToValuePtr<uint8>(&(*this).GenericTeamId, 0)) = 255;
    (*this).DamageTypeFlags = 0;
}

