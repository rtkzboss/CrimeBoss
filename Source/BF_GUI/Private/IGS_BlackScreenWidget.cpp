#include "IGS_BlackScreenWidget.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_BlackScreenWidget::UIGS_BlackScreenWidget() {
    (*this).ShowBlackScreen = true;
}

void UIGS_BlackScreenWidget::ToggleGlobalInvalidation(bool inEnabled) {
}


