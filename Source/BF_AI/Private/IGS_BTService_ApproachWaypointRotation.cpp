#include "IGS_BTService_ApproachWaypointRotation.h"

UIGS_BTService_ApproachWaypointRotation::UIGS_BTService_ApproachWaypointRotation() {
    auto& gen0 = (*this).WaypointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).WaypointKey, 0)) = 255;
    auto& gen1 = (*this).ApproachNotifiedKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ApproachNotifiedKey, 0)) = 255;
    auto& gen2 = (*this).OutRotationKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutRotationKey, 0)) = 255;
    (*this).NodeName = TEXT("Approach To Waypoint Rotation");
}


