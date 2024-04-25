#include "IGS_MonsterCloset.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_MonsterCloset::AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->helpersBox = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    this->MaxDistanceToPlayableArea = 3000.00f;
    this->DistanceToPlayableArea = -1.00f;
    this->CheckValidityInRuntime = true;
    this->helpersBox->SetupAttachment(RootComponent);
}


