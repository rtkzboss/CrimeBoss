#include "IGS_ProgressGadgetBase.h"

AIGS_ProgressGadgetBase::AIGS_ProgressGadgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bManualDisruptLocation = false;
    this->GadgetSubtype = EIGS_ProgressGadgetSubtype::Type_Default;
    this->CanByDisrubtedByAI = false;
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


