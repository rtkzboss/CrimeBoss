#include "IGS_ShieldBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"

AIGS_ShieldBase::AIGS_ShieldBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShieldMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
}



