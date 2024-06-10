#include "IGS_BTDecorator_CanBeSubdued.h"

UIGS_BTDecorator_CanBeSubdued::UIGS_BTDecorator_CanBeSubdued() {
    auto& gen271 = (*this).TargetKey.AllowedTypes;
    gen271.Empty();
    gen271.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetKey, 0)) = 255;
    (*this).NodeName = TEXT("Can Be Subdued");
}


