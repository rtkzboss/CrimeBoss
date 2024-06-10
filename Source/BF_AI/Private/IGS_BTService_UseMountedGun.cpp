#include "IGS_BTService_UseMountedGun.h"

UIGS_BTService_UseMountedGun::UIGS_BTService_UseMountedGun() {
    auto& gen396 = (*this).MountedGunKey.AllowedTypes;
    gen396.Empty();
    gen396.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Use Mounted Gun");
}


