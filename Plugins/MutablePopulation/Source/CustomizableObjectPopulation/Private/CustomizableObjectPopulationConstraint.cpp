#include "CustomizableObjectPopulationConstraint.h"

FCustomizableObjectPopulationConstraint::FCustomizableObjectPopulationConstraint() {
    this->Type = EPopulationConstraintType::NONE;
    this->ConstraintWeight = 0;
    this->TrueWeight = 0;
    this->FalseWeight = 0;
    this->Curve = NULL;
    this->CurveColor = ECurveColor::RED;
}

