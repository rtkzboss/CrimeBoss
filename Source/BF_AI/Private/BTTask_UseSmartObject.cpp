#include "BTTask_UseSmartObject.h"

UBTTask_UseSmartObject::UBTTask_UseSmartObject() {
    auto& gen554 = (*this).SmartObjectBBKey.AllowedTypes;
    gen554.Empty();
    gen554.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SmartObjectBBKey, 0)) = 255;
    (*this).NodeName = TEXT("Use Smart Object");
}


