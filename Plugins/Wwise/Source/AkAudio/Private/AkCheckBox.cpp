#include "AkCheckBox.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"

UAkCheckBox::UAkCheckBox() {
    (*this).WidgetStyle.UncheckedImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.UncheckedImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.UncheckedImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox.png");
    (*this).WidgetStyle.UncheckedImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.UncheckedImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.UncheckedHoveredImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.UncheckedHoveredImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedHoveredImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedHoveredImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedHoveredImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedHoveredImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.UncheckedHoveredImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox.png");
    (*this).WidgetStyle.UncheckedHoveredImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.UncheckedHoveredImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.UncheckedPressedImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.UncheckedPressedImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedPressedImage.TintColor, 0)).R = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedPressedImage.TintColor, 0)).G = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedPressedImage.TintColor, 0)).B = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UncheckedPressedImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.UncheckedPressedImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Hovered.png");
    (*this).WidgetStyle.UncheckedPressedImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.UncheckedPressedImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.CheckedImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.CheckedImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.CheckedImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Checked_Hovered.png");
    (*this).WidgetStyle.CheckedImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.CheckedImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.CheckedHoveredImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.CheckedHoveredImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedHoveredImage.TintColor, 0)).R = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedHoveredImage.TintColor, 0)).G = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedHoveredImage.TintColor, 0)).B = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedHoveredImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.CheckedHoveredImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Checked_Hovered.png");
    (*this).WidgetStyle.CheckedHoveredImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.CheckedHoveredImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.CheckedPressedImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.CheckedPressedImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedPressedImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedPressedImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedPressedImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.CheckedPressedImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.CheckedPressedImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Checked.png");
    (*this).WidgetStyle.CheckedPressedImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.CheckedPressedImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.UndeterminedImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.UndeterminedImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.UndeterminedImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Undetermined.png");
    (*this).WidgetStyle.UndeterminedImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.UndeterminedImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.UndeterminedHoveredImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.UndeterminedHoveredImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedHoveredImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedHoveredImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedHoveredImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedHoveredImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.UndeterminedHoveredImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Undetermined_Hovered.png");
    (*this).WidgetStyle.UndeterminedHoveredImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.UndeterminedHoveredImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.UndeterminedPressedImage.ImageSize.X = 1.600000000e+01f;
    (*this).WidgetStyle.UndeterminedPressedImage.ImageSize.Y = 1.600000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedPressedImage.TintColor, 0)).R = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedPressedImage.TintColor, 0)).G = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedPressedImage.TintColor, 0)).B = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.UndeterminedPressedImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.UndeterminedPressedImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/CheckBox_Undetermined_Hovered.png");
    (*this).WidgetStyle.UndeterminedPressedImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.UndeterminedPressedImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.Padding.Left = 2.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.ForegroundColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.ForegroundColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.ForegroundColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("ColorUseRule")->ContainerPtrToValuePtr<TEnumAsByte<ESlateColorStylingMode::Type>>(&(*this).WidgetStyle.ForegroundColor, 0)) = ESlateColorStylingMode::UseColor_Foreground;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.BorderBackgroundColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.BorderBackgroundColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.BorderBackgroundColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.BorderBackgroundColor, 0)).A = 1.000000000e+00f;
    (*this).IsFocusable = true;
}

void UAkCheckBox::SetIsChecked(bool InIsChecked) {
}

void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
}

void UAkCheckBox::SetAkItemId(const FGuid& ItemId) {
}

void UAkCheckBox::SetAkBoolProperty(const FString& ItemProperty) {
}

bool UAkCheckBox::IsPressed() const {
    return false;
}

bool UAkCheckBox::IsChecked() const {
    return false;
}

ECheckBoxState UAkCheckBox::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}

FString UAkCheckBox::GetAkProperty() const {
    return TEXT("");
}

FGuid UAkCheckBox::GetAkItemId() const {
    return FGuid{};
}


