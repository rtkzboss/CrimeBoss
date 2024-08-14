#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetChatRadialMenu.generated.h"

class UDataTable;
class UIGS_PlayerChatWheelComponent;
class UIGS_WidgetChatRadialSlice;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetChatRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerChatWheelComponent* PlayerChatWheelComponent;
    
public:
    UIGS_WidgetChatRadialMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleSliceClicked(UIGS_WidgetChatRadialSlice* inSlice);
    
};

