#include "BTTask_WaitForOnGround.h"

UBTTask_WaitForOnGround::UBTTask_WaitForOnGround() {
    auto& gen0 = (*this).CivlianToZipKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CivlianToZipKey, 0)) = 255;
    (*this).NodeName = TEXT("Wait For On Ground");
}


