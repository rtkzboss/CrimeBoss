#include "IGS_Pier.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Pier::AIGS_Pier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->IsDocking = false;
    this->CurrentVessel = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->SafeArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Safe Area"));
    this->Bridge = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bridge"));
    this->DockZone = CreateDefaultSubobject<UBoxComponent>(TEXT("Dock Zone"));
    this->FirstPlayerPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("First Player Position"));
    this->SecondPlayerPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Second Player Position"));
    this->ThirdPlayerPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Third Player Position"));
    this->FourthPlayerPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Fourth Player Position"));
    this->RightDockArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Dock Arrow"));
    this->LeftDockArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Dock Arrow"));
    this->SafeArea->SetupAttachment(RootComponent);
    this->Bridge->SetupAttachment(RootComponent);
    this->DockZone->SetupAttachment(RootComponent);
    this->FirstPlayerPosition->SetupAttachment(RootComponent);
    this->SecondPlayerPosition->SetupAttachment(RootComponent);
    this->ThirdPlayerPosition->SetupAttachment(RootComponent);
    this->FourthPlayerPosition->SetupAttachment(RootComponent);
    this->RightDockArrow->SetupAttachment(RootComponent);
    this->LeftDockArrow->SetupAttachment(RootComponent);
}

void AIGS_Pier::VesselExited_Implementation(AIGS_Vessel_Base* inVessel) {
}

void AIGS_Pier::VesselEntered_Implementation(AIGS_Vessel_Base* inVessel) {
}

void AIGS_Pier::StartDocking_Implementation(const FTransform& inTargetTransform, const FTransform& inFromTransform, AIGS_Vessel_Base* inVessel) {
}

void AIGS_Pier::OnExitedVehicle_Implementation(APawn* inVessel, int32 inSeatIndex) {
}

void AIGS_Pier::OnEnteredVehicle_Implementation(APawn* inVessel, int32 inSeatIndex) {
}

FTransform AIGS_Pier::FindBestTransformToDock(AActor* inActor) const {
    return FTransform{};
}

void AIGS_Pier::DockZoneEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_Pier::DockZoneBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_Pier::DockVessel_MULTICAST_Implementation(const FTransform& inTargetTransform, const FTransform& inFromTransform, AIGS_Vessel_Base* inVessel) {
}

FVector AIGS_Pier::ClosestSafePointTo(const FVector& inTarget) {
    return FVector{};
}

void AIGS_Pier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_Pier, IsDocking);
    DOREPLIFETIME(AIGS_Pier, CurrentVessel);
}


