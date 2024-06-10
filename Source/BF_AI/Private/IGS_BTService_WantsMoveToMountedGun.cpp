#include "IGS_BTService_WantsMoveToMountedGun.h"

UIGS_BTService_WantsMoveToMountedGun::UIGS_BTService_WantsMoveToMountedGun() {
    auto& gen397 = (*this).BestMountedGunKey.AllowedTypes;
    gen397.Empty();
    gen397.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    auto& gen398 = (*this).MountedGunKey.AllowedTypes;
    gen398.Empty();
    gen398.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Wants Move To Mounted Gun");
}


