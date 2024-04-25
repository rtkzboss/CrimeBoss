#pragma once
#include "CoreMinimal.h"
#include "META_BaseMission.h"
#include "META_TradeMissionRowInfo.h"
#include "META_TradeMissionSave.h"
#include "META_Trade.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Trade : public UMETA_BaseMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TradeMissionSave m_TradeMissionSave;
    
public:
    UMETA_Trade();

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_TradeMissionSave& inTradeMissionSave);
    
    UFUNCTION(BlueprintCallable)
    FMETA_TradeMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_TradeMissionRowInfo GetInfo() const;
    
};

