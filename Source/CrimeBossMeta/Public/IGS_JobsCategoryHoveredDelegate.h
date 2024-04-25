#pragma once
#include "CoreMinimal.h"
#include "IGS_JobsCategoryHoveredDelegate.generated.h"

class UIGS_JobsScreenCategoryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_JobsCategoryHovered, UIGS_JobsScreenCategoryWidget*, categoryWidget);

