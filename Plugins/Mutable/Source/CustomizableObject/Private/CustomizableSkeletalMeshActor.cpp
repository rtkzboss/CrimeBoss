#include "CustomizableSkeletalMeshActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CustomizableSkeletalComponent.h"

ACustomizableSkeletalMeshActor::ACustomizableSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CustomizableSkeletalComponent = CreateDefaultSubobject<UCustomizableSkeletalComponent>(TEXT("CustomizableSkeletalComponent0"));
    (*this).CustomizableSkeletalComponent->SetupAttachment((*this).RootComponent);
}


