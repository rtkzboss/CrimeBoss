#pragma once
#include "CoreMinimal.h"
#include "META_TaskInfoSave.h"
#include "UObject/Interface.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskStativeInfo.h"
#include "META_TaskInfo.h"
#include "META_Task.generated.h"

class AMETA_BaseGameMode;
class UGenericGraphNode;

UINTERFACE(Blueprintable)
class CRIMEBOSSMETA_API UMETA_Task : public UInterface {
    GENERATED_BODY()
};

class CRIMEBOSSMETA_API IMETA_Task : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetForceTaskStatus(EMETA_TaskStatus NewStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadTask(AMETA_BaseGameMode* inGameMode, UGenericGraphNode* inOwnerNode, int32 TaskID, int32 inCurrentValue, EMETA_TaskStatus InStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_TaskStatus GetTaskStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMETA_TaskStativeInfo GetTaskStativeInfoSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMETA_TaskInfoSave GetTaskInfoSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMETA_TaskInfo GetTaskInfo();
    
};

