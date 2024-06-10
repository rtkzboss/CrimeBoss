#include "IGS_ItemDisplayBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_BreakableWindowComponent.h"

AIGS_ItemDisplayBase::AIGS_ItemDisplayBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootObject = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).ItemDisplay = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemDisplay"));
    (*this).BreakableWindow = CreateDefaultSubobject<UIGS_BreakableWindowComponent>(TEXT("BreakableWindow"));
    (*this).RootComponent = (USceneComponent*)RootObject;
    (*this).ItemDisplay->SetupAttachment((*this).RootObject);
    (*this).BreakableWindow->SetupAttachment((*this).RootObject);
}

void AIGS_ItemDisplayBase::UpdateLoot() {
}



