#include "IGS_AcousticPortal.h"
#include "IGS_SignificanceComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_AcousticPortal::AIGS_AcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bOverrideShape = false;
    this->mR_IsOpened = false;
    this->bUseCustomOcclusion = false;
    this->MaxOcclusionValue = 1.00f;
    this->SignificanceComponent = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
}

void AIGS_AcousticPortal::OnRep_IsOpened() {
}

void AIGS_AcousticPortal::OnPostSignificance_Implementation(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue) {
}

void AIGS_AcousticPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_AcousticPortal, mR_IsOpened);
}


