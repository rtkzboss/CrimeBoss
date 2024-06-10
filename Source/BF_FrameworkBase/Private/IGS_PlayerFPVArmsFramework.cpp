#include "IGS_PlayerFPVArmsFramework.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Materials/MaterialParameterCollection.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AIGS_PlayerFPVArmsFramework::AIGS_PlayerFPVArmsFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> gen259(TEXT("/Game/00_Main/MaterialLibrary/Common/MPC_GlobalsCharactersWeapons.MPC_GlobalsCharactersWeapons"));
    (*this).WieldableMPC = gen259.Object;
    (*this).ArmsSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ArmsSkeletalMesh"));
    (*this).ArmsRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ArmsRoot"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = (USceneComponent*)ArmsRootComponent;
    (*this).ArmsSkeletalMesh->SetupAttachment((*this).RootComponent);
}

AIGS_GameCharacterFramework* AIGS_PlayerFPVArmsFramework::GetOwningPlayerCharacter() const {
    return NULL;
}

USkeletalMeshComponent* AIGS_PlayerFPVArmsFramework::GetArmsSkeletalMesh() const {
    return NULL;
}


