#include "IGS_BTService_WantsMoveToMountedGun.h"

UIGS_BTService_WantsMoveToMountedGun::UIGS_BTService_WantsMoveToMountedGun() {
    auto& gen0 = (*this).BestMountedGunKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    auto& gen1 = (*this).MountedGunKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Wants Move To Mounted Gun");
}


