#include "BTDecorator_WantsReactToOffence.h"

UBTDecorator_WantsReactToOffence::UBTDecorator_WantsReactToOffence() {
    auto& gen313 = (*this).OffenceDataKey.AllowedTypes;
    gen313.Empty();
    gen313.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("React To Offence");
}


