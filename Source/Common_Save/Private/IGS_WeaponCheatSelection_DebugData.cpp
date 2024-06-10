#include "IGS_WeaponCheatSelection_DebugData.h"

FIGS_WeaponCheatSelection_DebugData::FIGS_WeaponCheatSelection_DebugData() {
    (*this).WeaponToAdd = nullptr;
    (*this).WeaponClass = nullptr;
    (*this).SelectedIndices.Empty();
    (*this).WeaponPreviewText = FText::FromString(TEXT(""));
}

