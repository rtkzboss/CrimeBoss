#include "BTTask_Strafe.h"

UBTTask_Strafe::UBTTask_Strafe() {
    auto& gen541 = (*this).IsDodgingKey.AllowedTypes;
    gen541.Empty();
    gen541.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsDodgingKey, 0)) = 255;
    auto& gen542 = (*this).DodgeDistanceKey.AllowedTypes;
    gen542.Empty();
    gen542.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DodgeDistanceKey, 0)) = 255;
    (*this).NodeName = TEXT("Strafe");
}


