#include "IGS_WidgetDragItem.h"

UIGS_WidgetDragItem::UIGS_WidgetDragItem() : UUserWidget(FObjectInitializer::Get()) {
    this->ColumnSize = 1;
    this->rowSize = 1;
    this->Magnification = 1.00f;
    this->ItemImage = NULL;
    this->ItemSizeBox = NULL;
}


