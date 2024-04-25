#pragma once
#include "CoreMinimal.h"
#include "IGS_JobsCategorySelectNoScrollNoFocusDelegate.generated.h"

class UIGS_JobsScreenCategoryWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_JobsCategorySelectNoScrollNoFocus, UIGS_JobsScreenCategoryWidget*, categoryWidget);

