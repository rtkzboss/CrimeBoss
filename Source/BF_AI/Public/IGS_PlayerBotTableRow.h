#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_PlayerBotItemsData.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerBotTableRow.generated.h"

class UIGS_SettingsID;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_PlayerBotTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SettingsID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerBotItemsData Data;
    
    FIGS_PlayerBotTableRow();
};

