#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseMissionSave.h"
#include "META_PreviousMissionData.h"
#include "Templates/SubclassOf.h"
#include "META_AmbushMissionSave.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_AmbushMissionSave : public FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> InstigatorMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstigatorMissionTileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PreviousMissionData PreviousFPSMissionData;
    
    FMETA_AmbushMissionSave();
};

