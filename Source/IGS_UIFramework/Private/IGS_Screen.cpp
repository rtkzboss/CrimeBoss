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

void UIGS_Screen::Close() {
}

void UIGS_Screen::AddScreenToViewport() {
    AddToViewport(static_cast<int32>(ScreenZOrder));
}

void UIGS_Screen::NativeOnActivated()
{
    Super::NativeOnActivated();
    // game completely ignores the bSetVisibilityOnActivated and just sets visibility always (?!)
    SetVisibility(ESlateVisibility::SelfHitTestInvisible);
    OnOpen();
    OnOpenEvent.Broadcast();
}
void UIGS_Screen::NativeOnDeactivated()
{
    Super::NativeOnDeactivated();
    SetVisibility(ESlateVisibility::Collapsed);
    OnClosed();
    OnClosedEvent.Broadcast();
}


