#include "IGS_UnlockMissionContract.h"

FIGS_UnlockMissionContract::FIGS_UnlockMissionContract() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionID, 0)) = NAME_None;
}

