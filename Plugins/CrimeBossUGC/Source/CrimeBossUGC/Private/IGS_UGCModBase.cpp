#include "IGS_UGCModBase.h"
#include "IGS_UGCBaseGameInstance.h"

UIGS_UGCModBase::UIGS_UGCModBase() {
}

UWorld* UIGS_UGCModBase::GetWorld() const
{
    return GameInstance ? GameInstance->GetWorld() : nullptr;
}

UWorld* UIGS_UGCModBase::GetGameWorld() const {
    return GetWorld();
}



