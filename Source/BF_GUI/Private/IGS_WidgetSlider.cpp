#include "IGS_WidgetSlider.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetSlider::UIGS_WidgetSlider() : UUserWidget(FObjectInitializer::Get()) {
}

void UIGS_WidgetSlider::SetValue(float InValue) {
}

void UIGS_WidgetSlider::SetRange(const FVector2D& InRange) {
}

void UIGS_WidgetSlider::OnValueChanged(float InValue) {
}

void UIGS_WidgetSlider::MouseDragStart() {
}

void UIGS_WidgetSlider::MouseDragEnd() {
}

float UIGS_WidgetSlider::GetValue() {
    return 0.0f;
}

FVector2D UIGS_WidgetSlider::GetRange() {
    return FVector2D{};
}

void UIGS_WidgetSlider::ControllerDragStart() {
}

void UIGS_WidgetSlider::ControllerDragEnd() {
}


