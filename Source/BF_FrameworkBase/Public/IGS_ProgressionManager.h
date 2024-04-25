#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ProgressionResult.h"
#include "IGS_ProgressionManager.generated.h"

class UCurveTable;
class UIGS_ProgressionManagerData;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_ProgressionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_ProgressionManagerEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_ProgressionDataChanged, int32, Level, float, Points, bool, isMaxLevel);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingLevelUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ProgressionManagerData* ProgressionManagerData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ProgressionDataChanged OnProgressionDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ProgressionManagerEvent OnInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* m_ProgressionCurveTable;
    
public:
    UIGS_ProgressionManager();

    UFUNCTION(BlueprintCallable)
    FIGS_ProgressionResult SetPoints(float inPoints, bool inSaveProgression, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    FIGS_ProgressionResult SetLevel(int32 inLevel, bool inSaveProgression, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMultiplier(const float inMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void ResetProgression();
    
    UFUNCTION(BlueprintCallable)
    void ReInitProgressionManager();
    
    UFUNCTION(BlueprintCallable)
    FIGS_ProgressionResult ProcessMissionResult(UPARAM(Ref) FIGS_MissionResult& inMissionResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressToNextLevelFromPoints(float inPoints, int32 inNextLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressToNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPointsForLevel(int32 inLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPointsForLevel(int32 inLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDebugMultiplier() const;
    
};

