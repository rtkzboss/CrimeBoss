#include "IGS_CursorWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_CursorWidget::UIGS_CursorWidget() : UUserWidget(FObjectInitializer::Get()) {
}

bool UIGS_CursorWidget::IsCursorHovering() const {
    return false;
}


