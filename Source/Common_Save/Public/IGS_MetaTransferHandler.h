#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_Meta2FPS_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "IGS_MetaTransferHandler.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_SAVE_API UIGS_MetaTransferHandler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_Meta2FPS_Data Meta2FPSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_FPS2Meta_Data FPS2MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_SharedMetaTransfer_Data SharedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ErrorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectOnlySecuredLoot;
    
public:
    UIGS_MetaTransferHandler();

    UFUNCTION(BlueprintCallable)
    static void SetMissionScenarioOverride(const UObject* inWCO, FGameplayTag inMissionScenario);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionData(const UObject* inWCO, FGameplayTag inTag, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetMetaData(const UObject* inWCO, FGameplayTag inTag, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetLootCollection(const UObject* inWCO, bool inCollectOnlySecuredLoot);
    
    UFUNCTION(BlueprintCallable)
    static void SetErrorText(const UObject* inWCO, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void SendSharedData(const UObject* inWCO, const FIGS_SharedMetaTransfer_Data& inSharedData);
    
    UFUNCTION(BlueprintCallable)
    static void SendMetaData(const UObject* inWCO, const FIGS_Meta2FPS_Data& InMetaData);
    
    UFUNCTION(BlueprintCallable)
    static void SendFPSData(const UObject* inWCO, const FIGS_FPS2Meta_Data& inFPSData);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_SharedMetaTransfer_Data ReadSharedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_Meta2FPS_Data ReadQuickplayData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_Meta2FPS_Data ReadMetaData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FIGS_FPS2Meta_Data ReadFPSData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void GetMissionData(const UObject* inWCO, TMap<FGameplayTag, int32>& outMissionData);
    
    UFUNCTION(BlueprintCallable)
    static void GetMetadata(const UObject* inWCO, TMap<FGameplayTag, int32>& outMetaData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLootCollection(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static FText GetErrorText(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool DoSharedDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool DoQuickplayDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool DoMetaDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static bool DoFPSDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteMetaData(const UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSharedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMissionDataMap(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMetaDataMap(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMetaData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFPSData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAll(const UObject* inWCO);
    
};

