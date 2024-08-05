#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectiveType.generated.h"

UENUM(BlueprintType)
enum class EMETA_ObjectiveType : uint8 {
    None,
    ReviveMaximumXTimes,
    RetrieveLoot,
    DontRaiseAlarm,
    MaximumAmountOfStrikes,
    ZiptieXCivilians,
    KillAllGuardsWithoutAlarm,
    DontReachXPoliceStars,
    HeistersUsage,
    UseUniqueHeister,
    FinishWithinTime,
    OnlyMelee,
    EnemiesKills,
    GangstersKills,
    PoliceKills,
    SWATKills,
    GeneralAmountOfKills,
    LeaveBeforePolice,
    BakerMustGo,
    ByMissionOutputParams,
    DaysToComplete,
    DisableCameras,
    StealthAndDontDisableCameras,
    DontOverheatBuzzsaw,
    DontOverheatDrill,
    DontBreakCases,
    DetectiveKill,
    DetectiveNoKill,
    RescueHostages,
};

