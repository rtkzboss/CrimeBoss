#include "BTDecorator_CoverAttackSequenceBase.h"

UBTDecorator_CoverAttackSequenceBase::UBTDecorator_CoverAttackSequenceBase() {
    auto& gen0 = (*this).UpdateCoverKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
}


