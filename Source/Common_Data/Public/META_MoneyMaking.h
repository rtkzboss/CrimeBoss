#pragma once
#include "CoreMinimal.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_MoneyMaking.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_MoneyMaking : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_MoneyMakingMissionSave m_MoneyMakingMissionSave;
    
public:
    UMETA_MoneyMaking();

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const UObject* inWCO, const FMETA_MoneyMakingMissionSave& inMoneyMakingMissionSave);
    
    UFUNCTION(BlueprintCallable)
    FMETA_MoneyMakingMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;
    
};

