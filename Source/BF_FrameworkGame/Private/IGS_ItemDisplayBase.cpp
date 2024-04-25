#include "IGS_ItemDisplayBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_BreakableWindowComponent.h"

AIGS_ItemDisplayBase::AIGS_ItemDisplayBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootObject = (USceneComponent*)RootComponent;
    this->ItemDisplay = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemDisplay"));
    this->BreakableWindow = CreateDefaultSubobject<UIGS_BreakableWindowComponent>(TEXT("BreakableWindow"));
    this->ItemDisplay->SetupAttachment(RootComponent);
    this->BreakableWindow->SetupAttachment(RootComponent);
}

void AIGS_ItemDisplayBase::UpdateLoot() {
}



