#include "IGS_BTTask_ThrowBase.h"

UIGS_BTTask_ThrowBase::UIGS_BTTask_ThrowBase() {
    (*this).BeingShotInterrupts = true;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ThrowNotifyTag, 0)) = TEXT("Anim.Combat.Throw.Frag.Throw");
    auto& gen551 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).EventFilter, 0));
    gen551.Empty();
    gen551.AddDefaulted(1);
    auto& gen552 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).EventFilter, 0));
    gen552.Empty();
    gen552.AddDefaulted(3);
    (*this).NodeName = TEXT("DON'T USE BASE!");
}


