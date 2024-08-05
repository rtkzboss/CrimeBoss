#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_AmbushMissionRowInfo.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseFPSMission.h"
#include "META_PreviousMissionData.h"
#include "Templates/SubclassOf.h"
#include "META_Ambush.generated.h"

class UMETA_MissionID;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Ambush : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_AmbushMissionSave m_AmbushMissionSave;
    
public:
    UMETA_Ambush();

    UFUNCTION(BlueprintCallable)
    void SetPreviousFPSMissionData(const FMETA_PreviousMissionData& inPreviousFPSMissionData);
    
    UFUNCTION(BlueprintCallable)
    void SetInstigatorMissionID(TSubclassOf<UMETA_MissionID> inInstigatorMissionID);
    
    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_AmbushMissionSave& inAmbushMissionSave);
    
    UFUNCTION(BlueprintCallable)
    FMETA_AmbushMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PreviousMissionData GetPreviousFPSMissionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetInstigatorMissionTileID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetInstigatorMissionID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_AmbushMissionRowInfo GetInfo() const;
    
};

