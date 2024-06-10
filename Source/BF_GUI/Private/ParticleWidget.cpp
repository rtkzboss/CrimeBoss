#include "ParticleWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

UParticleWidget::UParticleWidget() {
    (*this).DirectionRange.Y = 3.600000000e+02f;
    (*this).ParticleLifetimeRange.X = 2.000000000e+00f;
    (*this).ParticleLifetimeRange.Y = 5.000000000e+00f;
    (*this).ParticleStartSizeRange.X = 2.000000000e+00f;
    (*this).ParticleStartSizeRange.Y = 5.000000000e+00f;
    (*this).ParticleEndSizeRange.X = 2.000000000e+00f;
    (*this).ParticleEndSizeRange.Y = 5.000000000e+00f;
    (*this).MaxParticles = 128;
}


