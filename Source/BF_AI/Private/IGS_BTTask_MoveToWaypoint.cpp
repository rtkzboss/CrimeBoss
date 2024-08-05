#include "IGS_BTTask_MoveToWaypoint.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToWaypoint::UIGS_BTTask_MoveToWaypoint() {
    auto& gen0 = (*this).WaypointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).WaypointKey, 0)) = 255;
    auto& gen1 = (*this).IsApproachMoveKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsApproachMoveKey, 0)) = 255;
    auto& gen2 = (*this).LookPosKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    auto& gen3 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(1);
    auto& gen4 = (*this).BlackboardKey.AllowedTypes;
    gen4.Empty();
    gen4.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Waypoint");
}


