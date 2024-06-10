#include "IGS_BTService_EvaluateBestTarget.h"

UIGS_BTService_EvaluateBestTarget::UIGS_BTService_EvaluateBestTarget() {
    auto& gen335 = (*this).BestTarget.AllowedTypes;
    gen335.Empty();
    gen335.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    auto& gen336 = (*this).SuspectedTargetLocation.AllowedTypes;
    gen336.Empty();
    gen336.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetLocation, 0)) = 255;
    (*this).TracePlayers = true;
    (*this).NodeName = TEXT("Evaluate Best Target");
}


