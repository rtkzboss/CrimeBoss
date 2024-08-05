#include "IGS_HoseSegmentBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_HoseSegmentBase::AIGS_HoseSegmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InteractionText = TEXT("<HOSE SEGMENT>");
    (*this).NumberOfPlaceOption = 1;
    (*this).SegmentLength = 1.000000000e+02f;
}

void AIGS_HoseSegmentBase::StartInteraction_SERVER_Implementation() {
}

void AIGS_HoseSegmentBase::StartInteraction_MULTICAST_Implementation() {
}

void AIGS_HoseSegmentBase::SpawnWaterCannon(FVector Loc, FRotator Rot) {
}

void AIGS_HoseSegmentBase::OnRep_ViewState() {
}

void AIGS_HoseSegmentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_HoseSegmentBase, mR_ViewState);
}


