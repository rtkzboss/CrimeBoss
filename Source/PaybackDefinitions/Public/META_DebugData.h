#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "META_Interval.h"
#include "META_DebugData.generated.h"

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_DebugData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval HeistersAlwaysSurvive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceBeKIAAfterSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceBeMIAAfterSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceBeKIAAfterFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceBeMIAAfterFail;
    
public:
    UMETA_DebugData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_Interval GetHeistersAlwaysSurvive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceBeMiaAfterSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceBeMiaAfterFail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceBeKiaAfterSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChanceBeKiaAfterFail() const;
    
};

