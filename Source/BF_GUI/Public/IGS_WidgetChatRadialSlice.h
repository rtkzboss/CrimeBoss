#pragma once
#include "CoreMinimal.h"
#include "IGS_ChatWheelDataRow.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "IGS_WidgetChatRadialSlice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetChatRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ChatWheelDataRow SliceData;
    
public:
    UIGS_WidgetChatRadialSlice();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_ChatWheelDataRow GetData() const;
    
};

