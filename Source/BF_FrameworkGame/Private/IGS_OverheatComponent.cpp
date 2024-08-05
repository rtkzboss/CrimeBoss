#include "IGS_OverheatComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_OverheatComponent::UIGS_OverheatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).IncreasePerBullet = -1.000000000e+00f;
    (*this).IncreasePerSecond = 1.000000015e-01f;
    (*this).DecreasePerSecond = -1.000000000e+00f;
    (*this).TimeUntilCooldown = 5.000000000e-01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_OverheatComponent::SetStaticMeshToApplyOverheat(UStaticMeshComponent* inStaticMesh, const int32 inIndex) {
}

void UIGS_OverheatComponent::OnRep_IsOverheated() {
}

void UIGS_OverheatComponent::OnRep_CurrentOverheat() {
}

void UIGS_OverheatComponent::HandleOverheatStateChanged_Implementation(bool inState) {
}

bool UIGS_OverheatComponent::GetIsOverheated() const {
    return false;
}

float UIGS_OverheatComponent::GetCurrentOverheatValue() const {
    return 0.0f;
}

void UIGS_OverheatComponent::BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter) {
}

void UIGS_OverheatComponent::BindToShooter(UIGS_ShooterBase* inShooter) {
}

void UIGS_OverheatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_OverheatComponent, mR_bIsOverheated);
    DOREPLIFETIME(UIGS_OverheatComponent, mR_CurrentOverheat);
}


