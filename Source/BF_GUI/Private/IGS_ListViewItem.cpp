#include "IGS_ListViewItem.h"

UIGS_ListViewItem::UIGS_ListViewItem() : UUserWidget(FObjectInitializer::Get()) {
    this->bHoldEnabled = true;
    this->HoldTime = 1.00f;
    this->HoldTicksPerSecond = 60;
    this->bHoldableOnlyWhenSelected = true;
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




