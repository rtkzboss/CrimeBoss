#pragma once
#include "CoreMinimal.h"
#include "IGS_JobsScreenCategoryItem.h"
#include "IGS_JobsScreenCategoryColumn.generated.h"

USTRUCT(BlueprintType)
struct FIGS_JobsScreenCategoryColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_JobsScreenCategoryItem> Items;
    
    CRIMEBOSSMETA_API FIGS_JobsScreenCategoryColumn();
};

