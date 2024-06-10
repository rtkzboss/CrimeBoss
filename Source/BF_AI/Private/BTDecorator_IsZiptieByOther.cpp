#include "BTDecorator_IsZiptieByOther.h"

UBTDecorator_IsZiptieByOther::UBTDecorator_IsZiptieByOther() {
    auto& gen297 = (*this).CivToZiptieKey.AllowedTypes;
    gen297.Empty();
    gen297.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Ziptie By Other");
}


