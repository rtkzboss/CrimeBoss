#include "IGS_BTTask_EqipMountedGun.h"

UIGS_BTTask_EqipMountedGun::UIGS_BTTask_EqipMountedGun() {
    auto& gen417 = (*this).BestMountedGunKey.AllowedTypes;
    gen417.Empty();
    gen417.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    auto& gen418 = (*this).MountedGunKey.AllowedTypes;
    gen418.Empty();
    gen418.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Eqip Mounted Gun");
}


