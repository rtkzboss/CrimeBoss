#include "IGS_ProgressGadgetBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_ProgressGadgetBase::AIGS_ProgressGadgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_ProgressGadgetBase::WaitForNavmeshAndValidate(ANavigationData* inNavData) {
}

void AIGS_ProgressGadgetBase::SetCanBeDisruptedByAI(bool InValue) {
}


bool AIGS_ProgressGadgetBase::IsDisrupted_Implementation() {
    return false;
}

FVector AIGS_ProgressGadgetBase::GetDisruptLocation() const {
    return FVector{};
}


