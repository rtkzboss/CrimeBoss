#include "IGS_AkActor.h"
#include "AkComponent.h"
#include "IGS_SignificanceComponent.h"

AIGS_AkActor::AIGS_AkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->SignificanceComponent = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
    this->AkComponent = (UAkComponent*)RootComponent;
}


UAkComponent* AIGS_AkActor::GetAkComponent() const {
    return NULL;
}


