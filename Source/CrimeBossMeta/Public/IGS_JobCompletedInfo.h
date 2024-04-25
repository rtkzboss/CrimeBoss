#pragma once
#include "CoreMinimal.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "IGS_JobCompletedInfo.generated.h"

class UMETA_BaseMission;

USTRUCT(BlueprintType)
struct FIGS_JobCompletedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseMission* MetaMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FPS2Meta_Data MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SharedMetaTransfer_Data SharedData;
    
    CRIMEBOSSMETA_API FIGS_JobCompletedInfo();
};

