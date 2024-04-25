#include "IGS_Rappel.h"
#include "Components/SceneComponent.h"
#include "IGS_RappelInteractiveComponent.h"

AIGS_Rappel::AIGS_Rappel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RappelTopInteractiveComponent = CreateDefaultSubobject<UIGS_RappelInteractiveComponent>(TEXT("RappelTopInteractiveComponent"));
    this->ShouldRotateView = true;
    this->OneTimeUse = false;
    this->OnceUsed = false;
    this->RappelTopInteractiveComponent->SetupAttachment(RootComponent);
}

void AIGS_Rappel::SetEnabled(bool inEnabled) const {
}

bool AIGS_Rappel::IsEnabled() const {
    return false;
}


