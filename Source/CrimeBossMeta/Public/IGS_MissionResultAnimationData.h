#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "UObject/Object.h"
#include "IGS_MissionResultAnimationData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_MissionResultAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonMissionResult MissionResult;
    
    UIGS_MissionResultAnimationData();

};

