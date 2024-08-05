#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubTileType.generated.h"

UENUM(BlueprintType)
enum class EIGS_HubTileType : uint8 {
    Block,
    Straight,
    Turn,
    Objective,
    T_Crossroad,
    X_Crossroad,
    DeadEnd,
    DeadEndWithStraightWalkways,
    F4Way,
    StraightRoad_4Way,
    TurnRoad_4Way,
    T_Crossroad_4Way,
    Generated_4Way,
    GeneratedDeadEnd,
    CharacterMission,
    WaterSide_3Way,
    WaterMiddle_4Way,
    WaterMiddleWithBridge_4Way,
    HighwayMiddle_4Way,
    HighwayMiddle1Road_4Way,
    StraightDoubleRoad_4way,
    CrossroadTDoubleRoad_4Way,
    G_WaterSide_3Way,
    DTileGeneratedDeadEnd4Way,
    DTileGeneratedStraightRoad,
    DTileGeneratedWarzoneHighwayWhole,
    DTileGeneratedWarzoneTripleTile,
    HighwayMiddleRoadStraight4Way,
    StraightSpecial,
    SpecialTurn,
};

