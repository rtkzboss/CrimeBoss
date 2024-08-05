#include "IGS_DecalImpact.h"
#include "Components/DecalComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_DecalImpact::AIGS_DecalImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootDecal = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).PrimaryActorTick.TickInterval = 3.330000117e-02f;
    (*this).RootComponent = (USceneComponent*)RootDecal;
    (*this).Decal->SetupAttachment((*this).RootDecal);
}

void AIGS_DecalImpact::RemoveAfterTime() {
}


