#include "META_CutsceneUIData.h"

FMETA_CutsceneUIData::FMETA_CutsceneUIData() {
    (*this).ID = FText::FromString(TEXT(""));
    (*this).Partner = EMETA_Partner::None;
    (*this).CanStartDelayed = false;
    (*this).ShouldExpire = false;
    (*this).DaysToExpire = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ScreenAfterEnd, 0)) = NAME_None;
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).GraphRef = nullptr;
    (*this).OriginalID = 0;
    (*this).ExpiredID = 0;
}

