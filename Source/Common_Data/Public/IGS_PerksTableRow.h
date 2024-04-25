#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_PerkData.h"
#include "Templates/SubclassOf.h"
#include "IGS_PerksTableRow.generated.h"

class UIGS_GameplayEffect_PerkBase;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_PerksTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_GameplayEffect_PerkBase> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PerkData Data;
    
    FIGS_PerksTableRow();
};

