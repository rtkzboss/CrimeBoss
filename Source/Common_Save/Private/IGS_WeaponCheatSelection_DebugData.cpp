#include "IGS_WeaponCheatSelection_DebugData.h"

FIGS_WeaponCheatSelection_DebugData::FIGS_WeaponCheatSelection_DebugData() {
    (*this).WeaponToAdd = nullptr;
    (*this).WeaponClass = nullptr;
    auto& gen2282 = (*this).SelectedIndices;
    gen2282.Empty();
    (*this).WeaponPreviewText = FText::FromString(TEXT(""));
}

