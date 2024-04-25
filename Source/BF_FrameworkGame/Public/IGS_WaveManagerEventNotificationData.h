#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_StormTacticType.h"
#include "IGS_SystemEventNotificationData.h"
#include "IGS_WaveManagerEventNotificationData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_WaveManagerEventNotificationData : public FIGS_SystemEventNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_StormTacticType ControlTactic;
    
    FIGS_WaveManagerEventNotificationData();
};

