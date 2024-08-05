#include "IGS_InputActionEntry.h"

FIGS_InputActionEntry::FIGS_InputActionEntry() {
    (*this).InputAction = EIGS_InputAction::IA_UNKNOWN;
    (*this).DisplayName = FText::FromString(TEXT(""));
    (*this).ActionName = NAME_None;
    (*this).IsHidden = false;
}

