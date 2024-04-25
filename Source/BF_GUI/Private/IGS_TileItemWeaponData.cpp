#include "IGS_TileItemWeaponData.h"

UIGS_TileItemWeaponData::UIGS_TileItemWeaponData() {
    this->m_ComparisonUIData = ETileComparisonUIData::None;
}

void UIGS_TileItemWeaponData::SetComparisonData(ETileComparisonUIData inComparisonUIData) {
}

ETileComparisonUIData UIGS_TileItemWeaponData::GetComparisonData() const {
    return ETileComparisonUIData::None;
}


