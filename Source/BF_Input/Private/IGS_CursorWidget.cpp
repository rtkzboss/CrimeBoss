#include "IGS_CursorWidget.h"

UIGS_CursorWidget::UIGS_CursorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bHovering = false;
}

bool UIGS_CursorWidget::IsCursorHovering() const {
    return false;
}


