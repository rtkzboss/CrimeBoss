#include "IGS_TransformSpring.h"

UIGS_TransformSpring::UIGS_TransformSpring(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrameRate = 60.00f;
}

void UIGS_TransformSpring::SetTarget(USceneComponent* inTargetComponent, TEnumAsByte<ESpringTypeEnum::Type> inSpringType) {
}

void UIGS_TransformSpring::AddVelocity(const FVector& inVelocity) {
}


