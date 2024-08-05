#include "IGS_ShootablePart.h"
#include "DataRegistryId.h"

FIGS_ShootablePart::FIGS_ShootablePart() {
    (*this).VisibleComponent.OtherActor = nullptr;
    (*this).VisibleComponent.ComponentProperty = NAME_None;
    (*this).VisibleComponent.PathToComponent = TEXT("");
    (*this).CollisionComponent.OtherActor = nullptr;
    (*this).CollisionComponent.ComponentProperty = NAME_None;
    (*this).CollisionComponent.PathToComponent = TEXT("");
    (*this).ReducesDamage.Value = 0.000000000e+00f;
    (*this).ReducesDamage.Curve.CurveTable = nullptr;
    (*this).ReducesDamage.Curve.RowName = NAME_None;
    (*TBaseStructure<FDataRegistryType>::Get()->FindPropertyByName("Name")->ContainerPtrToValuePtr<FName>(&(*this).ReducesDamage.RegistryType, 0)) = NAME_None;
    (*this).DamagePenetration.Value = 1.000000000e+00f;
    (*this).DamagePenetration.Curve.CurveTable = nullptr;
    (*this).DamagePenetration.Curve.RowName = NAME_None;
    (*TBaseStructure<FDataRegistryType>::Get()->FindPropertyByName("Name")->ContainerPtrToValuePtr<FName>(&(*this).DamagePenetration.RegistryType, 0)) = NAME_None;
    (*this).ChanceToShootOff.Value = 1.000000000e+00f;
    (*this).ChanceToShootOff.Curve.CurveTable = nullptr;
    (*this).ChanceToShootOff.Curve.RowName = NAME_None;
    (*TBaseStructure<FDataRegistryType>::Get()->FindPropertyByName("Name")->ContainerPtrToValuePtr<FName>(&(*this).ChanceToShootOff.RegistryType, 0)) = NAME_None;
}

