#include "BTTask_UseSmartObject.h"

UBTTask_UseSmartObject::UBTTask_UseSmartObject() {
    auto& gen0 = (*this).SmartObjectBBKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SmartObjectBBKey, 0)) = 255;
    (*this).NodeName = TEXT("Use Smart Object");
}


