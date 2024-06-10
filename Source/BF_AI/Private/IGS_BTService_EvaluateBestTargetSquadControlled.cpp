#include "IGS_BTService_EvaluateBestTargetSquadControlled.h"

UIGS_BTService_EvaluateBestTargetSquadControlled::UIGS_BTService_EvaluateBestTargetSquadControlled() {
    auto& gen0 = (*this).BestTarget.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    auto& gen1 = (*this).SuspectedTargetLocation.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetLocation, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Best Target Suqad Controlled");
}


