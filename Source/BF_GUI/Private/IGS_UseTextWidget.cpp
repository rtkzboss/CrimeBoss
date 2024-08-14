#include "IGS_UseTextWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"
#include "Templates/SubclassOf.h"

UIGS_UseTextWidget::UIGS_UseTextWidget() {
}





void UIGS_UseTextWidget::OnInteractiveObjectIsNear(bool inEnabled, EIGS_InteractionType inType, UIGS_InteractiveComponent* inInteractiveComponent, TSubclassOf<UIGS_InventoryObjectFramework> inNeededItem) {
}







UIGS_InteractiveComponent* UIGS_UseTextWidget::GetCurrentInteraction() {
    return NULL;
}


