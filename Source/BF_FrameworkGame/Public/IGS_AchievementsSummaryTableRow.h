#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_AchievementsReleaseType.h"
#include "IGS_AchievementsSummaryTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FIGS_AchievementsSummaryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AchievementsReleaseType Release;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UpdateEntitlementTag;
    
    BF_FRAMEWORKGAME_API FIGS_AchievementsSummaryTableRow();
};

