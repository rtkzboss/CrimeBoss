#include "IGS_BTService_ApproachWaypointRotation.h"

UIGS_BTService_ApproachWaypointRotation::UIGS_BTService_ApproachWaypointRotation() {
    auto& gen320 = (*this).WaypointKey.AllowedTypes;
    gen320.Empty();
    gen320.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).WaypointKey, 0)) = 255;
    auto& gen321 = (*this).ApproachNotifiedKey.AllowedTypes;
    gen321.Empty();
    gen321.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ApproachNotifiedKey, 0)) = 255;
    auto& gen322 = (*this).OutRotationKey.AllowedTypes;
    gen322.Empty();
    gen322.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutRotationKey, 0)) = 255;
    (*this).NodeName = TEXT("Approach To Waypoint Rotation");
}


