#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_BlameWidget.generated.h"

class UIGS_SuspicionManager;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_BlameWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
public:
    UIGS_BlameWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StrikesAdded(int32 inStrikes, int32 inStrikeIncrease, const FText& inBlame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlarmTriggered(const FText& inBlame);
    
};

