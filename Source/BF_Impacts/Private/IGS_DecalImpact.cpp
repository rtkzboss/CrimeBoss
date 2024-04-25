#include "IGS_DecalImpact.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

AIGS_DecalImpact::AIGS_DecalImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootDecal = (USceneComponent*)RootComponent;
    this->Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->Decal->SetupAttachment(RootComponent);
}

void AIGS_DecalImpact::RemoveAfterTime() {
}


