#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.generated.h"

UENUM(BlueprintType)
enum class EIGS_TeamSideEnum : uint8 {
    TS_Heisters,
    TS_Security,
    TS_Cops,
    TS_SWAT,
    TS_Civilians,
    TS_Employees,
    TS_Gangsters,
    TS_HeistersBackup,
    TS_MAX_INDEX,
    TS_StimuliEvent = 129,
    TS_GeneralListener,
    TS_Unknown = 255,
};

