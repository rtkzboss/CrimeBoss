#include "IGS_BTTask_MoveToWaypoint.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UIGS_BTTask_MoveToWaypoint::UIGS_BTTask_MoveToWaypoint() {
    auto& gen499 = (*this).WaypointKey.AllowedTypes;
    gen499.Empty();
    gen499.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).WaypointKey, 0)) = 255;
    auto& gen500 = (*this).IsApproachMoveKey.AllowedTypes;
    gen500.Empty();
    gen500.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsApproachMoveKey, 0)) = 255;
    auto& gen501 = (*this).LookPosKey.AllowedTypes;
    gen501.Empty();
    gen501.AddDefaulted(1);
    auto& gen502 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen502.Empty();
    gen502.AddDefaulted(1);
    auto& gen503 = (*this).BlackboardKey.AllowedTypes;
    gen503.Empty();
    gen503.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Waypoint");
}


