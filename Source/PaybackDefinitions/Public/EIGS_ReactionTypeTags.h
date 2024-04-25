#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReactionTypeTags.generated.h"

UENUM(BlueprintType)
enum class EIGS_ReactionTypeTags : uint8 {
    RT_UNKNOWN = 255,
    RT_Actor_Report = 0,
    RT_Actor_ReportDangerous,
    RT_Offender_MumbleToSelf = 50,
    RT_Offender_InformOffender,
    RT_Offender_TryArrest = 54,
    RT_Offender_KillOffender,
    ET_Special_Surprise = 100,
    ET_Special_SurpriseDangerous,
    ET_Special_SentToInvestigate,
};

