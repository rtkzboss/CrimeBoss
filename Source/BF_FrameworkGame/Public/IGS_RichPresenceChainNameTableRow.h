#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "IGS_RichPresenceChainNameTableRow.generated.h"

class UIGS_ChainContractID;

USTRUCT(BlueprintType)
struct FIGS_RichPresenceChainNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ChainContractID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    BF_FRAMEWORKGAME_API FIGS_RichPresenceChainNameTableRow();
};

