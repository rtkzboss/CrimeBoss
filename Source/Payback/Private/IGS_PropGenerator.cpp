#include "IGS_PropGenerator.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_PropLogicComponent.h"

AIGS_PropGenerator::AIGS_PropGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).m_PropLogicComponent = CreateDefaultSubobject<UIGS_PropLogicComponent>(TEXT("PropLogicComponent"));
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = (USceneComponent*)Root;
    (*this).m_PropLogicComponent->SetupAttachment((*this).Root);
}

UIGS_PropLogicComponent* AIGS_PropGenerator::GetLogicComponent() const {
    return NULL;
}


