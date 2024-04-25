#pragma once
#include "CoreMinimal.h"
#include "IGS_JobItemSelectedDelegate.generated.h"

class UIGS_JobsItemWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_JobItemSelected, UIGS_JobsItemWidget*, JobWidget);

