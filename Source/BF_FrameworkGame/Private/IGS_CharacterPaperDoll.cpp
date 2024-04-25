#include "IGS_CharacterPaperDoll.h"
#include "AkComponent.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"

AIGS_CharacterPaperDoll::AIGS_CharacterPaperDoll(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("BaseMesh"));
    this->LeftHandAttachedActor = NULL;
    this->RightHandAttachedActor = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->BaseMesh->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(BaseMesh);
}



void AIGS_CharacterPaperDoll::SaveHeadSnapshot() {
}





USkeletalMeshComponent* AIGS_CharacterPaperDoll::GetHeadComp() {
    return NULL;
}

USkeletalMeshComponent* AIGS_CharacterPaperDoll::GetBodyComp() {
    return NULL;
}


