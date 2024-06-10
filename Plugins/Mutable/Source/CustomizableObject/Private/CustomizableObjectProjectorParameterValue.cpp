#include "CustomizableObjectProjectorParameterValue.h"
#include "ECustomizableObjectProjectorType.h"

FCustomizableObjectProjectorParameterValue::FCustomizableObjectProjectorParameterValue() {
    (*this).ParameterName = TEXT("");
    (*this).Value.Position.X = 0.000000000e+00f;
    (*this).Value.Position.Y = 0.000000000e+00f;
    (*this).Value.Position.Z = 0.000000000e+00f;
    (*this).Value.Direction.X = 1.000000000e+00f;
    (*this).Value.Direction.Y = 0.000000000e+00f;
    (*this).Value.Direction.Z = 0.000000000e+00f;
    (*this).Value.Up.X = 0.000000000e+00f;
    (*this).Value.Up.Y = 1.000000000e+00f;
    (*this).Value.Up.Z = 0.000000000e+00f;
    (*this).Value.Scale.X = 1.000000000e+01f;
    (*this).Value.Scale.Y = 1.000000000e+01f;
    (*this).Value.Scale.Z = 1.000000000e+02f;
    (*this).Value.ProjectionType = ECustomizableObjectProjectorType::Planar;
    (*this).Value.Angle = 6.283185482e+00f;
    (*this).Uid = TEXT("");
    (*this).RangeValues.Empty();
}

