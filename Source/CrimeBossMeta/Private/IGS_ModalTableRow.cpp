#include "IGS_ModalTableRow.h"

FIGS_ModalTableRow::FIGS_ModalTableRow() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Text = FText::FromString(TEXT(""));
    (*this).AcceptButtonText = FText::FromString(TEXT(""));
    (*this).CancelButtonText = FText::FromString(TEXT(""));
    (*this).ExtraOptionButtonText = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
}

