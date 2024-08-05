#include "IGS_MetalDetector.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_MetalDetector::AIGS_MetalDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AlarmLightDuration = 1.000000000e+01f;
    (*this).AINoiseLoudness = 5.000000000e-01f;
    (*this).AINoiseMaxRange = 5.000000000e+02f;
    (*this).PlayerOffenceDuration = 5.000000000e+00f;
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


