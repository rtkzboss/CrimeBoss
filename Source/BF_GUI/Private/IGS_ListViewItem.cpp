#include "IGS_ListViewItem.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_ListViewItem::UIGS_ListViewItem() : UUserWidget(FObjectInitializer::Get()) {
    (*this).bHoldEnabled = true;
    (*this).HoldTime = 1.000000000e+00f;
    (*this).HoldTicksPerSecond = 60;
    (*this).bHoldableOnlyWhenSelected = true;
}

void UIGS_ListViewItem::HandleReleased_Implementation() {
}

void UIGS_ListViewItem::HandlePressed_Implementation() {
}

void UIGS_ListViewItem::HandleHoldTick_Implementation() {
}

void UIGS_ListViewItem::HandleHoldStarted_Implementation() {
}

void UIGS_ListViewItem::HandleHoldFinished_Implementation() {
}

void UIGS_ListViewItem::HandleHoldCancelled_Implementation() {
}

void UIGS_ListViewItem::HandleDoubleClicked_Implementation() {
}

void UIGS_ListViewItem::HandleClicked_Implementation() {
}




