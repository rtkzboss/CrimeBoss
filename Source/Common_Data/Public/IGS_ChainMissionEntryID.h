#pragma once
#include "CoreMinimal.h"
#include "META_MissionID.h"
#include "IGS_ChainMissionEntryID.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_ChainMissionEntryID : public UMETA_MissionID {
    GENERATED_BODY()
public:
    UIGS_ChainMissionEntryID();

};

