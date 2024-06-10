#include "IGS_BTService_WantsUseMountedGun.h"

UIGS_BTService_WantsUseMountedGun::UIGS_BTService_WantsUseMountedGun() {
    auto& gen399 = (*this).MountedGunKey.AllowedTypes;
    gen399.Empty();
    gen399.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Wants Use Mounted Gun");
}


