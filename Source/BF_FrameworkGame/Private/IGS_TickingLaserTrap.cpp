#include "IGS_TickingLaserTrap.h"
#include "Curves/CurveFloat.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_TickingLaserTrap::AIGS_TickingLaserTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TickTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("TickingTimeline"));
    (*this).Speed = 3.000000119e-01f;
    (*this).m_TickingCurve = CreateDefaultSubobject<UCurveFloat>(TEXT("TickingCurve"));
}

void AIGS_TickingLaserTrap::Client_StopRotationTimeline_Implementation() const {
}

void AIGS_TickingLaserTrap::Client_PlayRotationTimeline_Implementation(bool inReverting) const {
}

void AIGS_TickingLaserTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_TickingLaserTrap, mR_bIsReversing);
}


