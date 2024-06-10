#include "IGS_CharacterPaperDoll.h"
#include "AkComponent.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_CharacterPaperDoll::AIGS_CharacterPaperDoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).BaseMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("BaseMesh"));
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).HeadComponentReference.ComponentProperty = TEXT("head");
    (*this).BodyComponentReference.ComponentProperty = TEXT("Body");
    (*this).RootComponent = (USceneComponent*)RootSceneComponent;
    (*this).AkComponent->SetupAttachment((*this).BaseMesh);
    (*this).BaseMesh->SetupAttachment((*this).RootSceneComponent);
}



void AIGS_CharacterPaperDoll::SaveHeadSnapshot() {
}





USkeletalMeshComponent* AIGS_CharacterPaperDoll::GetHeadComp() {
    return NULL;
}

USkeletalMeshComponent* AIGS_CharacterPaperDoll::GetBodyComp() {
    return NULL;
}


