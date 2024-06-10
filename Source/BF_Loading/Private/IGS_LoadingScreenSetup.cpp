#include "IGS_LoadingScreenSetup.h"

FIGS_LoadingScreenSetup::FIGS_LoadingScreenSetup() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    auto& gen1994 = (*this).BinkMoviePaths;
    gen1994.Empty();
    auto& gen1995 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TipsTagContainer, 0));
    gen1995.Empty();
    auto& gen1996 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TipsTagContainer, 0));
    gen1996.Empty();
    auto& gen1997 = (*this).Tips;
    gen1997.Empty();
    auto& gen1998 = (*this).ControllerTips;
    gen1998.Empty();
    auto& gen1999 = (*this).KeyboardMouseTips;
    gen1999.Empty();
}

