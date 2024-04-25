#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "META_ScoreData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_ScoreData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScoreWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinScoreWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreDecreasePerDayElapsedWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaysWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScoreLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinScoreLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreDecreasePerDayElapsedLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaysLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePer1PercentControlledTerritory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerEnemyLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerFinishedHeist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerVeteranPromotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerElitePromotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerDeadHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerMissingHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerDesertersHeister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerDayBankruptcy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePerCivilian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScorePer1000ValueInCashOrLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor0Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor1Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor2Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreFor3Stars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStarScoreLimit;
    
public:
    UMETA_ScoreData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerVeteranPromotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerMissingHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerFinishedHeist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerEnemyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerElitePromotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerDesertersHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerDeadHeister() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerDayBankruptcy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePerCivilian() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePer1PercentControlledTerritory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePer1000ValueInCashOrLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreFor3Stars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreFor2Stars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreFor1Stars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreFor0Stars() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreDecreasePerDayElapsedWon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreDecreasePerDayElapsedLost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinScoreWon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinScoreLost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinDaysWon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinDaysLost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxStarScoreLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxScoreWon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxScoreLost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxScore() const;
    
};

