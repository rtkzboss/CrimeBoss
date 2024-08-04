#include "IGS_Screen.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_Screen::UIGS_Screen() {
    (*this).ScreenInputMode = EScreenInputMode::UIOnly;
    (*this).InputDelay = 3.000000119e-01f;
    (*this).RefreshFocusAfterClose = true;
    (*this).CallOnOpenAfterClosePreviousScreen = true;
}

void UIGS_Screen::RefreshFocus_Implementation() {
}







bool UIGS_Screen::IsThisScreenOnTop() const {
    return false;
}

bool UIGS_Screen::GoBack_Implementation() {
    return false;
}

FText UIGS_Screen::GetTitleOverride_Implementation() const {
    return FText::GetEmpty();
}

// I don't know why any of this shit exists and why IGS doesn't just use the built in activation system
void UIGS_Screen::Open() {
    SetVisibility(ESlateVisibility::SelfHitTestInvisible);
    OnOpen();
    OnOpenEvent.Broadcast();
    RefreshFocus();
}
void UIGS_Screen::Close() {
    SetVisibility(ESlateVisibility::Collapsed);
    OnClosed();
    OnClosedEvent.Broadcast();
}

void UIGS_Screen::AddScreenToViewport() {
    AddToViewport(static_cast<int32>(ScreenZOrder));
}
