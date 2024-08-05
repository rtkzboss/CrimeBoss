#pragma once
#include "CoreMinimal.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_TurfActionAfterSuccess.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_StoryMissionSave.h"
#include "META_StoryMission.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_StoryMission : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_StoryMissionSave m_StoryMissionSave;
    
public:
    UMETA_StoryMission();

    UFUNCTION(BlueprintCallable)
    void SetWeaknessStrength(EMETA_AIBossStrengthChangeIntensity inNewStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetTurfActionAfterSuccess(EMETA_TurfActionAfterSuccess inNewTurfAction);
    
    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const UObject* inWCO, const FMETA_StoryMissionSave& inStoryMissionSave);
    
    UFUNCTION(BlueprintCallable)
    EMETA_AIBossStrengthChangeIntensity GetWeaknessStrength();
    
    UFUNCTION(BlueprintCallable)
    EMETA_TurfActionAfterSuccess GetTurfActionAfterSuccess();
    
    UFUNCTION(BlueprintCallable)
    FMETA_StoryMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;
    
};

