#include "IGS_WidgetPingRadialSlice.h"

UIGS_WidgetPingRadialSlice::UIGS_WidgetPingRadialSlice() : UUserWidget(FObjectInitializer::Get()) {
    this->BackgroundImage = NULL;
    this->bIsHovered = false;
    this->SlotBind = -1;
    this->PlayerCommandType = EIGS_PlayerCommandType::Command_SingleTap;
}

void UIGS_WidgetPingRadialSlice::SliceUnhover_Implementation() {
}

void UIGS_WidgetPingRadialSlice::SliceHover_Implementation() {
}

bool UIGS_WidgetPingRadialSlice::SliceClicked_Implementation() {
    return false;
}




