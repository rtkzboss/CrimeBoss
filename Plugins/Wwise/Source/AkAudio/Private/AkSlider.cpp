#include "AkSlider.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"

UAkSlider::UAkSlider() {
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalBarImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalBarImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalBarImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalBarImage.TintColor, 0)).A = 1.000000000e+00f;
    (*this).WidgetStyle.NormalBarImage.DrawAs = ESlateBrushDrawType::Box;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredBarImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredBarImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredBarImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredBarImage.TintColor, 0)).A = 1.000000000e+00f;
    (*this).WidgetStyle.HoveredBarImage.DrawAs = ESlateBrushDrawType::Box;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledBarImage.TintColor, 0)).R = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledBarImage.TintColor, 0)).G = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledBarImage.TintColor, 0)).B = 5.000000000e-01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledBarImage.TintColor, 0)).A = 1.000000000e+00f;
    (*this).WidgetStyle.DisabledBarImage.DrawAs = ESlateBrushDrawType::Box;
    (*this).WidgetStyle.NormalThumbImage.ImageSize.X = 8.000000000e+00f;
    (*this).WidgetStyle.NormalThumbImage.ImageSize.Y = 1.400000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalThumbImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalThumbImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalThumbImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.NormalThumbImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.NormalThumbImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button.png");
    (*this).WidgetStyle.NormalThumbImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.NormalThumbImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.HoveredThumbImage.ImageSize.X = 8.000000000e+00f;
    (*this).WidgetStyle.HoveredThumbImage.ImageSize.Y = 1.400000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredThumbImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredThumbImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredThumbImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.HoveredThumbImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.HoveredThumbImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button.png");
    (*this).WidgetStyle.HoveredThumbImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.HoveredThumbImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.DisabledThumbImage.ImageSize.X = 8.000000000e+00f;
    (*this).WidgetStyle.DisabledThumbImage.ImageSize.Y = 1.400000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledThumbImage.TintColor, 0)).R = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledThumbImage.TintColor, 0)).G = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledThumbImage.TintColor, 0)).B = 1.000000000e+00f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.DisabledThumbImage.TintColor, 0)).A = 1.000000000e+00f;
    (*TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName")->ContainerPtrToValuePtr<FName>(&(*this).WidgetStyle.DisabledThumbImage, 0)) = TEXT("../../../Engine/Content/Slate/Common/Button_Disabled.png");
    (*this).WidgetStyle.DisabledThumbImage.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.DisabledThumbImage.ImageType = ESlateBrushImageType::FullColor;
    (*this).WidgetStyle.BarThickness = 2.000000000e+00f;
    (*this).SliderBarColor.R = 1.000000000e+00f;
    (*this).SliderBarColor.G = 1.000000000e+00f;
    (*this).SliderBarColor.B = 1.000000000e+00f;
    (*this).SliderBarColor.A = 1.000000000e+00f;
    (*this).SliderHandleColor.R = 1.000000000e+00f;
    (*this).SliderHandleColor.G = 1.000000000e+00f;
    (*this).SliderHandleColor.B = 1.000000000e+00f;
    (*this).SliderHandleColor.A = 1.000000000e+00f;
    (*this).StepSize = 9.999999776e-03f;
    (*this).IsFocusable = true;
}

void UAkSlider::SetValue(float InValue) {
}

void UAkSlider::SetStepSize(float InValue) {
}

void UAkSlider::SetSliderHandleColor(FLinearColor InValue) {
}

void UAkSlider::SetSliderBarColor(FLinearColor InValue) {
}

void UAkSlider::SetLocked(bool InValue) {
}

void UAkSlider::SetIndentHandle(bool InValue) {
}

void UAkSlider::SetAkSliderItemProperty(const FString& ItemProperty) {
}

void UAkSlider::SetAkSliderItemId(const FGuid& ItemId) {
}

float UAkSlider::GetValue() const {
    return 0.0f;
}

FString UAkSlider::GetAkSliderItemProperty() const {
    return TEXT("");
}

FGuid UAkSlider::GetAkSliderItemId() const {
    return FGuid{};
}


