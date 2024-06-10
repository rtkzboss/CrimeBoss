#include "IGS_BTService_EvaluateBestTargetSquadControlled.h"

UIGS_BTService_EvaluateBestTargetSquadControlled::UIGS_BTService_EvaluateBestTargetSquadControlled() {
    auto& gen337 = (*this).BestTarget.AllowedTypes;
    gen337.Empty();
    gen337.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    auto& gen338 = (*this).SuspectedTargetLocation.AllowedTypes;
    gen338.Empty();
    gen338.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SuspectedTargetLocation, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Best Target Suqad Controlled");
}


