#include "IGS_AITransitionObjectBase.h"
#include "IGS_GetActorByGameplayTagComponent.h"

AIGS_AITransitionObjectBase::AIGS_AITransitionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavLink = NULL;
    this->IsForced = false;
    this->m_GetActorByGameplayTagComponent = CreateDefaultSubobject<UIGS_GetActorByGameplayTagComponent>(TEXT("GetActorByGameplayTagComponent"));
}

void AIGS_AITransitionObjectBase::SetupNavlink(UBoxComponent* helpersBox) const {
}

void AIGS_AITransitionObjectBase::SetNavlinkLinkEnabled(bool InValue) {
}


