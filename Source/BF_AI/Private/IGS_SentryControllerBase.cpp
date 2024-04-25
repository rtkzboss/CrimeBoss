#include "IGS_SentryControllerBase.h"
#include "Perception/AIPerceptionComponent.h"
#include "IGS_BehaviorTreeGameComponent.h"
#include "IGS_BlackboardGameComponent.h"
#include "IGS_SentryAggroComponent.h"
#include "IGS_SentryMemoryComponent.h"
#include "IGS_SentryPerceptionComponent.h"

AIGS_SentryControllerBase::AIGS_SentryControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    this->SquadID = 118999881;
    this->Memory = CreateDefaultSubobject<UIGS_SentryMemoryComponent>(TEXT("SentryMemory"));
    this->Aggro = CreateDefaultSubobject<UIGS_SentryAggroComponent>(TEXT("SentryAggro"));
    this->Perception = CreateDefaultSubobject<UIGS_SentryPerceptionComponent>(TEXT("SentryPerception"));
    this->PossedPawn = NULL;
    this->BlackboardGameComponent = CreateDefaultSubobject<UIGS_BlackboardGameComponent>(TEXT("BlackboardGameComponent"));
    this->BehaviorTreeGameComponent = CreateDefaultSubobject<UIGS_BehaviorTreeGameComponent>(TEXT("BehaviorTreeGameComponent"));
}


