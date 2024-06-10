#include "DrawerData.h"

FDrawerData::FDrawerData() {
    (*this).bDrawIfNotSelected = true;
    (*this).bDrawIfSelected = false;
    (*this).PathColor.B = 255;
    (*this).PathColor.G = 0;
    (*this).PathColor.R = 0;
    (*this).PathColor.A = 255;
    (*this).Thickness = 5.000000000e+00f;
}

