#include "IGS_PayloadBase.h"
#include "Net/UnrealNetwork.h"

AIGS_PayloadBase::AIGS_PayloadBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxCollisionComponent = NULL;
    this->mR_bIsEnabled = false;
    this->mR_bIsActive = false;
    this->mR_bIsFinished = false;
}

void AIGS_PayloadBase::SetEnabled(bool inState) {
}

void AIGS_PayloadBase::OnRep_IsFinished() {
}

void AIGS_PayloadBase::OnRep_IsEnabled() {
}

void AIGS_PayloadBase::OnRep_IsActive() {
}




void AIGS_PayloadBase::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIGS_PayloadBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AIGS_PayloadBase::IsPayloadFinished() {
    return false;
}

bool AIGS_PayloadBase::IsPayloadEnabled() {
    return false;
}

bool AIGS_PayloadBase::IsPayloadActive() {
    return false;
}

void AIGS_PayloadBase::FinishPayload() {
}

void AIGS_PayloadBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PayloadBase, mR_bIsEnabled);
    DOREPLIFETIME(AIGS_PayloadBase, mR_bIsActive);
    DOREPLIFETIME(AIGS_PayloadBase, mR_bIsFinished);
}


