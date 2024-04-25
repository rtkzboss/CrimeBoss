#include "IGS_SquadBase.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AIGS_SquadBase::AIGS_SquadBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BehaviorTree = NULL;
    this->BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
    this->BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
}

void AIGS_SquadBase::Notify(EIGS_AINotif Type, AIGS_GameCharacterFramework* caller, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir) const {
}

FVector AIGS_SquadBase::GetSquadMeanLocation() const {
    return FVector{};
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetRandomMember() const {
    return NULL;
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetNearestMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const {
    return NULL;
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetNearestAliveMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const {
    return NULL;
}

AIGS_GameCharacterFramework* AIGS_SquadBase::GetCenterMember() const {
    return NULL;
}


