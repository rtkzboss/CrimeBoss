#include "IGS_AkActor.h"
#include "AkComponent.h"
#include "IGS_SignificanceComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_AkActor::AIGS_AkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SignificanceComponent = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).RootComponent = (USceneComponent*)AkComponent;
}


UAkComponent* AIGS_AkActor::GetAkComponent() const {
    return NULL;
}


