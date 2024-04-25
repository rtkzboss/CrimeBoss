#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EMETA_RespectLvl.h"
#include "META_DifficultyConfig.h"
#include "IGS_MenuCommonData_Base.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UIGS_MenuCommonData_Base : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BossCharacterTagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfMissionsCanBeCompletedByEachHeisterPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_DifficultyConfig> ChancesForGeneratingMissionWithDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EdgeCaseObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedLoot;
    
public:
    UIGS_MenuCommonData_Base();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_ScenarioDifficulty GetRandomizedDifficulty(EMETA_RespectLvl inRespectLvl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEdgeCaseObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetBossCharacterTagID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfMissionsCanBeCompletedByEachHeisterPerDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllowedLoot() const;
    
};

