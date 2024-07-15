#include "PaybackAICharacter.h"
#include "IGS_ShootablePartsHandlerComponent.h"
#include "IGS_AIWorldTracingComponent.h"
#include "IGS_BleedingHandlerComponent.h"
#include "IGS_InteractionStealthKillComponent.h"
#include "IGS_NetworkComponentCharacter.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "PaybackAICharactersEventsWatcher.h"

APaybackAICharacter::APaybackAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NetworkCharacter = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    (*this).AICharactersEventsWatcher = CreateDefaultSubobject<UPaybackAICharactersEventsWatcher>(TEXT("AI Characters Events Watcher"));
    (*this).BleedingComponent = CreateDefaultSubobject<UIGS_BleedingHandlerComponent>(TEXT("Bleeding Handler Component"));
    (*this).AIWorldTracingComponent = CreateDefaultSubobject<UIGS_AIWorldTracingComponent>(TEXT("AI World Tracing Component"));
    (*this).AimAssistCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Aim Assist Capsule"));
    (*this).ShootableHelmetCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Shootable Helmet Collision"));
    (*this).ShootableHelmetBoneName = TEXT("head");
    (*this).InteractionStealthKill = CreateDefaultSubobject<UIGS_InteractionStealthKillComponent>(TEXT("Interaction Stealth Kill"));
    (*this).ShootablePartsHandlerComponent = CreateDefaultSubobject<UIGS_ShootablePartsHandlerComponent>(TEXT("Shootable Parts Handler Component"));
    (*this).DownStateHandlerComponent = (UIGS_DownStateHandlerComponentFramework*)BleedingComponent;
    (*this).bUseControllerRotationYaw = false;
    (*this).AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    (*this).AIControllerClass = nullptr;
    (*this).InteractionStealthKill->SetupAttachment((*this).RootComponent);
    (*this).AimAssistCapsule->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
    (*this).ShootableHelmetCollision->SetupAttachment((*ACharacter::StaticClass()->FindPropertyByName("Mesh")->ContainerPtrToValuePtr<USkeletalMeshComponent*>(&(*this), 0)));
}


