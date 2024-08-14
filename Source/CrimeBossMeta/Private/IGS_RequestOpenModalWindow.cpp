#include "IGS_RequestOpenModalWindow.h"
#include "Templates/SubclassOf.h"

UIGS_RequestOpenModalWindow::UIGS_RequestOpenModalWindow() {
}

UIGS_RequestOpenModalWindow* UIGS_RequestOpenModalWindow::RequestOpenVideoModalWindow(UObject* WorldContextObject, TSubclassOf<UIGS_ModalScreen> modalScreenClass, FText InTitle, FText inDescription, FText inConfirmText, FText inCancelText, FText inExtraOptionText, UBinkMediaPlayer* inMedia, bool inSlownDown, EScreenZOrder screenOrder) {
    return NULL;
}

UIGS_RequestOpenModalWindow* UIGS_RequestOpenModalWindow::RequestOpenModalWindowDataRow(UObject* WorldContextObject, FIGS_ModalTableRow& ModalData, EScreenZOrder screenOrder, bool isTutorial) {
    return NULL;
}

UIGS_RequestOpenModalWindow* UIGS_RequestOpenModalWindow::RequestOpenModalWindow(UObject* WorldContextObject, TSubclassOf<UIGS_ModalScreen> modalScreenClass, FText InTitle, FText inDescription, FText inConfirmText, FText inCancelText, FText inExtraOptionText, EScreenZOrder screenOrder) {
    return NULL;
}

void UIGS_RequestOpenModalWindow::ModalWindowExtraSelected_Internal() {
}

void UIGS_RequestOpenModalWindow::ModalWindowConfirmed_Internal() {
}

void UIGS_RequestOpenModalWindow::ModalWindowCancelled_Internal() {
}


