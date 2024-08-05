#include "IGS_VentShaft.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_VentShaftInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VentShaft::AIGS_VentShaft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).VentShaftEnterInteractiveComponent = CreateDefaultSubobject<UIGS_VentShaftInteractiveComponent>(TEXT("VentShaftEnterInteractiveComponent"));
    (*this).VentShaftExitInteractiveComponent = CreateDefaultSubobject<UIGS_VentShaftInteractiveComponent>(TEXT("VentShaftExitInteractiveComponent"));
    (*this).BoxBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBlocker"));
    (*this).BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTrigger"));
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).VentShaftEnterInteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).VentShaftExitInteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).BoxBlocker->SetupAttachment((*this).RootComponent);
    (*this).BoxTrigger->SetupAttachment((*this).RootComponent);
}

void AIGS_VentShaft::OnTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_VentShaft::OnTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_VentShaft::OnRep_IsOpened() const {
}

void AIGS_VentShaft::OnCoverUsed(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_VentShaft::OnBlockerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_VentShaft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VentShaft, IsOpened);
}


