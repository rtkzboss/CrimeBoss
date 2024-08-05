#include "IGS_ContainerItemDragOperation.h"
#include "Blueprint/DragDropOperation.h"

UIGS_ContainerItemDragOperation::UIGS_ContainerItemDragOperation() {
    (*this).ItemRootSlotId = -1;
    (*this).DestionationItemRootSlotId = -1;
    (*this).OriginatingSlotId = -1;
    (*this).CurrentHoveredSlotId = -1;
    (*this).CurrentHoveredRow = -1;
    (*this).CurrentHoveredColumn = -1;
    (*this).ItemRowSize = -1;
    (*this).ItemColumnSize = -1;
}


