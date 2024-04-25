#include "IGS_MetalDetector.h"
#include "Net/UnrealNetwork.h"

AIGS_MetalDetector::AIGS_MetalDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlarmAudioComponent = NULL;
    this->BoxCollisionComponent = NULL;
    this->AlarmLight = NULL;
    this->StatusLight = NULL;
    this->AlarmLightDuration = 10.00f;
    this->AINoiseLoudness = 0.50f;
    this->AINoiseMaxRange = 500.00f;
    this->PlayerOffenceDuration = 5.00f;
    this->mR_bIsEnabled = false;
}

void AIGS_MetalDetector::SetEnabled(bool inState) {
}

void AIGS_MetalDetector::SetAlarmDisabledDelayed() const {
}

void AIGS_MetalDetector::OnRep_OnSetEnabled() const {
}

void AIGS_MetalDetector::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AIGS_MetalDetector::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AIGS_MetalDetector::Client_OnDetected_Implementation() {
}

void AIGS_MetalDetector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_MetalDetector, mR_bIsEnabled);
}


