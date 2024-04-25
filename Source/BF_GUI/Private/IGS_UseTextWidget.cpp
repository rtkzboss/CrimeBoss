#include "IGS_UseTextWidget.h"
#include "Templates/SubclassOf.h"

UIGS_UseTextWidget::UIGS_UseTextWidget() {
    this->m_CurrentInteraction = NULL;
}




void UIGS_UseTextWidget::OnInteractiveObjectIsNear(bool inEnabled, EIGS_InteractionType inType, UIGS_InteractiveComponent* inInteractiveComponent, TSubclassOf<UIGS_InventoryObjectFramework> inNeededItem) {
}







UIGS_InteractiveComponent* UIGS_UseTextWidget::GetCurrentInteraction() {
    return NULL;
}


