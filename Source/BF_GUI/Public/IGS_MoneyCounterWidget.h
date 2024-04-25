#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_MoneyCounterWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_MoneyCounterWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecuredLoot;
    
public:
    UIGS_MoneyCounterWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddValue(int32 InValue);
    
};

