#include "IGS_MonsterCloset.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_MonsterCloset::AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).helpersBox = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    (*this).MaxDistanceToPlayableArea = 3.000000000e+03f;
    (*this).DistanceToPlayableArea = -1.000000000e+00f;
    (*this).ApproxPlayableAreaEntry.X = 3.402823466e+38f;
    (*this).ApproxPlayableAreaEntry.Y = 3.402823466e+38f;
    (*this).ApproxPlayableAreaEntry.Z = 3.402823466e+38f;
    (*this).CheckValidityInRuntime = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).helpersBox->SetupAttachment((*this).RootComponent);
}


