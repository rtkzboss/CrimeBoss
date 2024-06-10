#include "IGS_BTTask_SquadDoorBreachBase.h"

UIGS_BTTask_SquadDoorBreachBase::UIGS_BTTask_SquadDoorBreachBase() {
    auto& gen530 = (*this).BreachRolesKey.AllowedTypes;
    gen530.Empty();
    gen530.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BreachRolesKey, 0)) = 255;
    (*this).NodeName = TEXT("Squad Base Fight");
}


