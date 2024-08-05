#include "CustomizableObjectProjector.h"

FCustomizableObjectProjector::FCustomizableObjectProjector() {
    (*this).Position.X = 0.000000000e+00f;
    (*this).Position.Y = 0.000000000e+00f;
    (*this).Position.Z = 0.000000000e+00f;
    (*this).Direction.X = 1.000000000e+00f;
    (*this).Direction.Y = 0.000000000e+00f;
    (*this).Direction.Z = 0.000000000e+00f;
    (*this).Up.X = 0.000000000e+00f;
    (*this).Up.Y = 1.000000000e+00f;
    (*this).Up.Z = 0.000000000e+00f;
    (*this).Scale.X = 1.000000000e+01f;
    (*this).Scale.Y = 1.000000000e+01f;
    (*this).Scale.Z = 1.000000000e+02f;
    (*this).ProjectionType = ECustomizableObjectProjectorType::Planar;
    (*this).Angle = 6.283185482e+00f;
}

