#include "IGS_AcousticPortal.h"
#include "AkAcousticPortalState.h"
#include "IGS_SignificanceComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_AcousticPortal::AIGS_AcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxOcclusionValue = 1.000000000e+00f;
    (*this).SignificanceComponent = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
}

void AIGS_AcousticPortal::OnRep_IsOpened() {
}

void AIGS_AcousticPortal::OnPostSignificance_Implementation(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue) {
}

void AIGS_AcousticPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_AcousticPortal, mR_IsOpened);
}


