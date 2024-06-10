#include "IGS_MeleePushAnimDatabase.h"

FIGS_MeleePushAnimDatabase::FIGS_MeleePushAnimDatabase() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = TEXT("Anim.Push.Unknown");
    auto& gen2051 = (*this).AnimVariations;
    gen2051.Empty();
}

