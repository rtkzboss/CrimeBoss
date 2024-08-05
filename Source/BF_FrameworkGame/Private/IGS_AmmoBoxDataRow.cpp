#include "IGS_AmmoBoxDataRow.h"

FIGS_AmmoBoxDataRow::FIGS_AmmoBoxDataRow() {
    (*this).ID = EIGS_AmmoBoxItem::None;
    (*this).AmmoProbabilities = nullptr;
    (*this).BoxMaterial = nullptr;
    (*this).BoxScale.X = 1.000000000e+00f;
    (*this).BoxScale.Y = 1.000000000e+00f;
    (*this).BoxScale.Z = 1.000000000e+00f;
}

