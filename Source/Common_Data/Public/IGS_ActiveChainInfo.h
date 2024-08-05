#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_ActiveChainInfo.generated.h"

class UIGS_ChainContractID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ActiveChainInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ChainContractID> ActiveChainContractID;
    
    FIGS_ActiveChainInfo();
};

