#include "IGS_WidgetRadialSliceBase.h"

UIGS_WidgetRadialSliceBase::UIGS_WidgetRadialSliceBase() : UUserWidget(FObjectInitializer::Get()) {
    this->BackgroundImage = NULL;
    this->bIsHovered = false;
}

void UIGS_WidgetRadialSliceBase::SliceUnhover_Implementation() {
}

void UIGS_WidgetRadialSliceBase::SliceHover_Implementation() {
}

bool UIGS_WidgetRadialSliceBase::SliceClicked_Implementation() {
    return false;
}



