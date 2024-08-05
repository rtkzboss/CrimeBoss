#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReactionVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_ReactionVariant : uint8 {
    React_Unknown = 255,
    React_ReportIn = 0,
    React_WaveAtPlayer,
    React_FixWall,
    React_FixTable,
    React_CloseDoor,
    React_Inspect,
    React_SearchPlayer,
    React_SurpriseSmall,
    React_SurpriseDanger,
    React_LookAround,
    React_BackToNormal,
    React_InspectCamera,
    React_ReportInWithGun,
};

