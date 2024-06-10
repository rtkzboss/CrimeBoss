#include "IGS_StaticVehicleBase.h"
#include "IGS_NavModifierComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_StaticVehicleBase::AIGS_StaticVehicleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NavModifier = CreateDefaultSubobject<UIGS_NavModifierComponent>(TEXT("NavModifierComponent"));
    (*this).mR_Color.A = 255;
    (*this).ClearCanAffectNavigationFlag = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
}

void AIGS_StaticVehicleBase::Server_SetColor_Implementation(FColor InColor) {
}

void AIGS_StaticVehicleBase::OnRep_OnColorChanged() const {
}

void AIGS_StaticVehicleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_StaticVehicleBase, mR_Color);
}


