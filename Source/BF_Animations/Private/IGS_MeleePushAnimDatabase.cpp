#include "IGS_MeleePushAnimDatabase.h"

FIGS_MeleePushAnimDatabase::FIGS_MeleePushAnimDatabase() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Push.Unknown");
    (*this).AnimVariations.Empty();
}

