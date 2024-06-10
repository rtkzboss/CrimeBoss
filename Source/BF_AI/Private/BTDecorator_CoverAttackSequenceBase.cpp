#include "BTDecorator_CoverAttackSequenceBase.h"

UBTDecorator_CoverAttackSequenceBase::UBTDecorator_CoverAttackSequenceBase() {
    auto& gen278 = (*this).UpdateCoverKey.AllowedTypes;
    gen278.Empty();
    gen278.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
}


