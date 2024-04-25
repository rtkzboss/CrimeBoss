#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_RichPresenceMissionNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RichPresenceMissionNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    BF_FRAMEWORKGAME_API FIGS_RichPresenceMissionNameTableRow();
};

