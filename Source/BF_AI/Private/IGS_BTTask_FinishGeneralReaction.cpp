#include "IGS_BTTask_FinishGeneralReaction.h"

UIGS_BTTask_FinishGeneralReaction::UIGS_BTTask_FinishGeneralReaction() {
    (*this).bSuccess = true;
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("FinishGeneralReaction");
}


