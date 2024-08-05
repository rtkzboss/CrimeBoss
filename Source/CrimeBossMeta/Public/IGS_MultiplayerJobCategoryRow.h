#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MultiplayerJobCategoryRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FIGS_MultiplayerJobCategoryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CategoryItemsDataTable;
    
    CRIMEBOSSMETA_API FIGS_MultiplayerJobCategoryRow();
};

