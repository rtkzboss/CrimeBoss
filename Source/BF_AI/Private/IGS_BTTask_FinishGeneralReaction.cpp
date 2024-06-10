#include "IGS_BTTask_FinishGeneralReaction.h"

UIGS_BTTask_FinishGeneralReaction::UIGS_BTTask_FinishGeneralReaction() {
    (*this).bSuccess = true;
    auto& gen421 = (*this).BlackboardKey.AllowedTypes;
    gen421.Empty();
    gen421.AddDefaulted(1);
    (*this).NodeName = TEXT("FinishGeneralReaction");
}


