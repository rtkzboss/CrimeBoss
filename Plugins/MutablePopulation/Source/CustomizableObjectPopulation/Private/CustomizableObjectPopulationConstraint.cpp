#include "CustomizableObjectPopulationConstraint.h"

FCustomizableObjectPopulationConstraint::FCustomizableObjectPopulationConstraint() {
    (*this).Type = EPopulationConstraintType::NONE;
    (*this).ConstraintWeight = 1;
    (*this).TrueWeight = 1;
    (*this).FalseWeight = 1;
    (*this).DiscreteValue = TEXT("");
    (*this).DiscreteColor.R = 0.000000000e+00f;
    (*this).DiscreteColor.G = 0.000000000e+00f;
    (*this).DiscreteColor.B = 0.000000000e+00f;
    (*this).DiscreteColor.A = 0.000000000e+00f;
    auto& gen1591 = (*this).WhiteList;
    gen1591.Empty();
    auto& gen1592 = (*this).Blacklist;
    gen1592.Empty();
    auto& gen1593 = (*this).Ranges;
    gen1593.Empty();
    (*this).Curve = nullptr;
    (*this).CurveColor = ECurveColor::RED;
}

