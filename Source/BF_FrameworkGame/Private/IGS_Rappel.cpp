#include "IGS_Rappel.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_RappelInteractiveComponent.h"

AIGS_Rappel::AIGS_Rappel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StartLocation.X = 6.000000000e+01f;
    (*this).StartLocation.Z = 2.000000000e+02f;
    (*this).EndLocation.X = 6.000000000e+01f;
    (*this).EndLocation.Z = -1.000000000e+02f;
    (*this).RappelTopInteractiveComponent = CreateDefaultSubobject<UIGS_RappelInteractiveComponent>(TEXT("RappelTopInteractiveComponent"));
    (*this).ShouldRotateView = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).RappelTopInteractiveComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_Rappel::SetEnabled(bool inEnabled) const {
}

bool AIGS_Rappel::IsEnabled() const {
    return false;
}


