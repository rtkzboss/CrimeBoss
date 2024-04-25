#include "IGS_WorldSpaceUserWidget.h"

UIGS_WorldSpaceUserWidget::UIGS_WorldSpaceUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bTickDormant = false;
    this->WidgetType = EIGS_WorldWidgetType::Widget_Hidden;
    this->OwnerComponent = NULL;
    this->bOnScreen = false;
    this->bTargeted = false;
    this->Angle = 0.00f;
    this->CenterToEdgeLerpAlpha = 0.00f;
    this->bForceHidden = false;
    this->bHideWhenOccluded = false;
    this->bOccluded = false;
}

void UIGS_WorldSpaceUserWidget::SetTargeted(bool inTargeted) {
}










