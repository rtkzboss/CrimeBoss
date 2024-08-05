#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnAnimType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpawnAnimType : uint8 {
    SA_None,
    SA_Window,
    SA_Wall,
    SA_Rope,
    SA_Ceiling,
    SA_RappelWindow,
    SA_CeilingDrop_3,
    SA_CeilingDrop_3_5,
    SA_CeilingDrop_4,
    SA_CeilingDrop_3_Roll_4,
    SA_Rappel_5_Roll_4,
    SA_Ledge_1,
    SA_Ledge_1_Repel_8,
    SA_Ledge_1_Repel_12,
    SA_Ledge_1_Repel_16,
    SA_Wall_2,
    SA_Wall_3,
    SA_Vaulting_1,
    SA_RappelWindowArcBig,
    SA_Helicopter_Left,
    SA_Helicopter_Right,
};

