#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadBase.h"
#include "IGS_ReviveRecord.h"
#include "BTTask_SquadHeistersRevive.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SquadHeistersRevive : public UIGS_BTTask_SquadBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ReviveRecord> m_RevivingRecord;
    
public:
    UBTTask_SquadHeistersRevive();

};

