#include "PaybackAICharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_ShootablePartsHandlerComponent.h"
#include "IGS_AIWorldTracingComponent.h"
#include "IGS_BleedingHandlerComponent.h"
#include "IGS_InteractionStealthKillComponent.h"
#include "IGS_NetworkComponentCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "PaybackAICharactersEventsWatcher.h"

APaybackAICharacter::APaybackAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = NULL;
    this->DownStateHandlerComponent = CreateDefaultSubobject<UIGS_BleedingHandlerComponent>(TEXT("Bleeding Handler Component"));
    this->ShootablePartsHandlerComponent = CreateDefaultSubobject<UIGS_ShootablePartsHandlerComponent>(TEXT("Shootable Parts Handler Component"));
    this->NetworkCharacter = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    this->AICharactersEventsWatcher = CreateDefaultSubobject<UPaybackAICharactersEventsWatcher>(TEXT("AI Characters Events Watcher"));
    this->BleedingComponent = (UIGS_BleedingHandlerComponent*)DownStateHandlerComponent;
    this->AIWorldTracingComponent = CreateDefaultSubobject<UIGS_AIWorldTracingComponent>(TEXT("AI World Tracing Component"));
    this->AimAssistCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Aim Assist Capsule"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->ShootableHelmetCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Shootable Helmet Collision"));
    this->StartWithWeapon = false;
    this->ShootableHelmetBoneName = TEXT("head");
    this->InteractionStealthKill = CreateDefaultSubobject<UIGS_InteractionStealthKillComponent>(TEXT("Interaction Stealth Kill"));
    this->AimAssistCapsule->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->ShootableHelmetCollision->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted*>(this));
    this->InteractionStealthKill->SetupAttachment(RootComponent);
}


