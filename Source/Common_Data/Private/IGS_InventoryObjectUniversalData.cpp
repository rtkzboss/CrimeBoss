#include "IGS_InventoryObjectUniversalData.h"

FIGS_InventoryObjectUniversalData::FIGS_InventoryObjectUniversalData() {
    (*this).bUseDefaultValues = true;
    (*this).bUseCustomName = false;
    (*this).UniversalBool_1 = false;
    (*this).UniversalBool_2 = false;
    (*this).UniversalBool_3 = false;
    (*this).UniversalInt_1 = 0;
    (*this).UniversalInt_2 = 0;
    (*this).UniversalInt_3 = 0;
    (*this).UniversalInt_4 = 0;
    (*this).UniversalInt_5 = 0;
    (*this).UniversalFloat_1 = 0.000000000e+00f;
    (*this).UniversalFloat_2 = 0.000000000e+00f;
    (*this).UniversalText_1 = FText::FromString(TEXT(""));
}

