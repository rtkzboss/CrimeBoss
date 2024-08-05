#include "IGS_TaskWidgetOr.h"
#include "EIGS_ObjectiveState.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_TaskWidgetOr::UIGS_TaskWidgetOr() {
    (*this).bShouldPlayWidgetAnimations = true;
}


