#include "IGS_PlayerFPVArmsFramework.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AIGS_PlayerFPVArmsFramework::AIGS_PlayerFPVArmsFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ArmsRoot"));
    this->WieldableMPCInstance = NULL;
    this->ArmsSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArmsSkeletalMesh"));
    this->ArmsRootComponent = (USceneComponent*)RootComponent;
    this->ArmsSkeletalMesh->SetupAttachment(RootComponent);
}

AIGS_GameCharacterFramework* AIGS_PlayerFPVArmsFramework::GetOwningPlayerCharacter() const {
    return NULL;
}

USkeletalMeshComponent* AIGS_PlayerFPVArmsFramework::GetArmsSkeletalMesh() const {
    return NULL;
}


