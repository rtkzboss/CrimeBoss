#include "IGS_WalkieTalkie.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_InteractiveComponent.h"

AIGS_WalkieTalkie::AIGS_WalkieTalkie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComp"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    this->InteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    this->WalkieClassToAdd = NULL;
    this->WalkieTalkieCheckInSound = NULL;
    this->WalkieTalkiePickupSound = NULL;
    this->InteractiveComponent->SetupAttachment(RootComponent);
}



