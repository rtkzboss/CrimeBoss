#include "BTDecorator_MoveToIdlePointSequence.h"

UBTDecorator_MoveToIdlePointSequence::UBTDecorator_MoveToIdlePointSequence() {
    auto& gen0 = (*this).PatrolPointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PatrolPointKey, 0)) = 255;
    (*this).NodeName = TEXT("Move To Idle Point Sequence");
}


