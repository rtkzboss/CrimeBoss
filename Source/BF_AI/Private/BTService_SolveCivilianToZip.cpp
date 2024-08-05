#include "BTService_SolveCivilianToZip.h"

UBTService_SolveCivilianToZip::UBTService_SolveCivilianToZip() {
    auto& gen0 = (*this).CivlianToZipKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CivlianToZipKey, 0)) = 255;
    (*this).RefreshDelay = 5.000000000e-01f;
    (*this).NodeName = TEXT("Solve Civilian ToZip");
}


