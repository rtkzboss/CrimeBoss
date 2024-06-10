#include "IGS_LoadingScreenSetup.h"

FIGS_LoadingScreenSetup::FIGS_LoadingScreenSetup() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).BackgroundTexture = nullptr;
    (*this).ThrobberSprite = nullptr;
    (*this).BinkMoviePaths.Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TipsTagContainer, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TipsTagContainer, 0)).Empty();
    (*this).Tips.Empty();
    (*this).ControllerTips.Empty();
    (*this).KeyboardMouseTips.Empty();
}

