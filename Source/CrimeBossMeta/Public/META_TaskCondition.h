#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TaskStatus.h"
#include "META_TaskStativeInfo.h"
#include "EMETA_NeedValueType.h"
#include "META_BaseGraphComponent.h"
#include "META_Task.h"
#include "META_TaskCondition.generated.h"

class AMETA_BaseGameMode;
class UMETA_BaseStoryGraphManager;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_TaskCondition : public UMETA_BaseGraphComponent, public IMETA_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_NeedValueType NeedValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NeedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_TaskStatus Status;
    
    UMETA_TaskCondition();

    UFUNCTION(BlueprintCallable)
    void SetStativeInformation(AMETA_BaseGameMode* inGameMode, FMETA_TaskStativeInfo inTaskStativeInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetNeedValue(EMETA_NeedValueType inNeedValueType, int32 inNeedValue, FGameplayTag inNeedValueTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshValues();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetNeedValue();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetGraphSoftObjectCurrentNodeOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindUnbindDelegates(bool inBind);
    

    // Fix for true pure virtual functions not being implemented
};

