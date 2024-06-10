#include "ParticleSystemWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

UParticleSystemWidget::UParticleSystemWidget() {
    (*this).bAutoActivate = true;
}

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset) {
}

UParticleSystemComponent* UParticleSystemWidget::GetParticleComponent() const {
    return NULL;
}

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset) {
}


