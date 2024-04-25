#include "IGS_PropGenerator.h"
#include "Components/SceneComponent.h"
#include "IGS_PropLogicComponent.h"

AIGS_PropGenerator::AIGS_PropGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->m_PropLogicComponent = CreateDefaultSubobject<UIGS_PropLogicComponent>(TEXT("PropLogicComponent"));
    this->m_PropLogicComponent->SetupAttachment(RootComponent);
}

UIGS_PropLogicComponent* AIGS_PropGenerator::GetLogicComponent() const {
    return NULL;
}


