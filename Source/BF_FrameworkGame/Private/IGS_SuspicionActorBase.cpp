#include "IGS_SuspicionActorBase.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_SuspicionComponent.h"

AIGS_SuspicionActorBase::AIGS_SuspicionActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SuspicionComponent = CreateDefaultSubobject<UIGS_SuspicionComponent>(TEXT("SuspicionComponent"));
    (*this).Root = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
    (*this).SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    (*this).TeamSide = EIGS_TeamSideEnum::TS_StimuliEvent;
    (*this).LifetimeStartTime = -1.000000000e+00f;
    (*this).LifeTime = -1.000000000e+00f;
    (*this).NoticedLifetime = -1.000000000e+00f;
    (*this).IsValidForAmbient = true;
    (*this).RootComponent = (USceneComponent*)SceneRoot;
    (*this).Root->SetupAttachment((*this).RootComponent);
}

void AIGS_SuspicionActorBase::SetTeamID(EIGS_TeamSideEnum inTeamID) {
}

void AIGS_SuspicionActorBase::SetSuspicionLifeTimeEnded() {
}



UIGS_SuspicionComponent* AIGS_SuspicionActorBase::GetSuspicionComponent() const {
    return NULL;
}

AIGS_GameCharacterFramework* AIGS_SuspicionActorBase::GetOwningCharacter() const {
    return NULL;
}


