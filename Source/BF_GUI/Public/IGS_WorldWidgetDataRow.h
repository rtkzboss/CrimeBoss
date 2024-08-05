#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_WorldWidgetData.h"
#include "IGS_WorldWidgetDataRow.generated.h"

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_WorldWidgetDataRow : public FIGS_WorldWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WorldWidgetType ID;
    
    FIGS_WorldWidgetDataRow();
};

