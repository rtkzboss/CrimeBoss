#include "IGS_WidgetDragItem.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetDragItem::UIGS_WidgetDragItem() : UUserWidget(FObjectInitializer::Get()) {
    (*this).ColumnSize = 1;
    (*this).rowSize = 1;
    (*this).Magnification = 1.000000000e+00f;
}


