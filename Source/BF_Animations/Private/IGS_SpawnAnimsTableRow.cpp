#include "IGS_SpawnAnimsTableRow.h"

FIGS_SpawnAnimsTableRow::FIGS_SpawnAnimsTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Spawn.Unknown");
    (*this).AnimVariations.Empty();
}

