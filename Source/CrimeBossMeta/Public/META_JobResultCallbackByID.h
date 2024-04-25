#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobResult.h"
#include "META_BaseCallback.h"
#include "Templates/SubclassOf.h"
#include "META_JobResultCallbackByID.generated.h"

class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_JobResultCallbackByID : public UMETA_BaseCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_JobResult, int32> NextNodesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePathIfMissionDoesntExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_JobResult OverridePath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMETA_JobResult> ResultsWhenJobIsNotRemovedFromTheMap;
    
public:
    UMETA_JobResultCallbackByID();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_JobResult> GetAdditionalInfo(TSubclassOf<UMETA_MissionID> inMissionID);
    
};

