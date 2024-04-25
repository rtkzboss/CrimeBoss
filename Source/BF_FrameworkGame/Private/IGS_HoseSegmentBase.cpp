#include "IGS_HoseSegmentBase.h"
#include "Net/UnrealNetwork.h"

AIGS_HoseSegmentBase::AIGS_HoseSegmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SegmentMesh = NULL;
    this->AllowStretch = false;
    this->InteractionText = TEXT("<HOSE SEGMENT>");
    this->BoxOnTheWall = NULL;
    this->WaterCannonClass = NULL;
    this->WaterHose = NULL;
    this->HighlightMaterial = NULL;
    this->OverrideTurretMaterials = false;
    this->OverrideHosetMaterials = false;
    this->NumberOfPlaceOption = 1;
    this->OldWaterCannonClass = NULL;
    this->InteractiveComponent = NULL;
    this->SegmentLength = 100.00f;
    this->mR_ViewState = WaterHoseState::Hidden;
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


