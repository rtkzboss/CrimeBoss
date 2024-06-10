#include "IGS_MultiplayerHubDataRow.h"

FIGS_MultiplayerHubDataRow::FIGS_MultiplayerHubDataRow() {
    (*this).ButtonName = FText::FromString(TEXT(""));
    (*this).ButtonDescription = FText::FromString(TEXT(""));
    (*this).SelectionLabelDefaultText = FText::FromString(TEXT(""));
    (*this).SelectionLabelDisabledText = FText::FromString(TEXT(""));
}

