#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionObjective.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ObjectiveNotificationWidget.generated.h"

class UIGS_ObjectiveManager;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ObjectiveNotificationWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ObjectivePreviouslyAdded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_ObjectiveNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotificationReady();
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjectiveNotification(FIGS_MissionObjective inObjectiveStruct, bool bAddedObjective);
    
};

