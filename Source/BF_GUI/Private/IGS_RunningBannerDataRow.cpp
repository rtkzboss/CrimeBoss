#include "IGS_RunningBannerDataRow.h"

FIGS_RunningBannerDataRow::FIGS_RunningBannerDataRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).Separator = FText::FromString(TEXT(""));
    (*this).Headline = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).BadgeText = FText::FromString(TEXT(""));
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).G = 0.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).HeadlineColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("ColorUseRule")->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).HeadlineColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).G = 0.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeBackgroundColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("ColorUseRule")->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).BadgeBackgroundColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).G = 0.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).BadgeTextColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("ColorUseRule")->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).BadgeTextColor, 0)) = ESlateColorStylingMode::UseColor_Specified;
}

