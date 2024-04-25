#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "Engine/DataTable.h"
#include "IGS_BotOrderDatabaseData.h"
#include "IGS_BotOrderDatabaseUIData.h"
#include "IGS_BotOrderDatabaseTableRow.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_BotOrderDatabaseTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_BotCommandDefinition ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BotOrderDatabaseData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BotOrderDatabaseUIData UI;
    
    FIGS_BotOrderDatabaseTableRow();
};

