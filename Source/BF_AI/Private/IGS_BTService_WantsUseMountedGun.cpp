#include "IGS_BTService_WantsUseMountedGun.h"

UIGS_BTService_WantsUseMountedGun::UIGS_BTService_WantsUseMountedGun() {
    auto& gen0 = (*this).MountedGunKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Wants Use Mounted Gun");
}


