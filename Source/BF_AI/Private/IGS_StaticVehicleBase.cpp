#include "IGS_StaticVehicleBase.h"
#include "IGS_NavModifierComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_StaticVehicleBase::AIGS_StaticVehicleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->VehicleMesh = NULL;
    this->NavModifier = CreateDefaultSubobject<UIGS_NavModifierComponent>(TEXT("NavModifierComponent"));
    this->ClearCanAffectNavigationFlag = true;
}

void AIGS_StaticVehicleBase::Server_SetColor_Implementation(FColor InColor) {
}

void AIGS_StaticVehicleBase::OnRep_OnColorChanged() const {
}

void AIGS_StaticVehicleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_StaticVehicleBase, mR_Color);
}


