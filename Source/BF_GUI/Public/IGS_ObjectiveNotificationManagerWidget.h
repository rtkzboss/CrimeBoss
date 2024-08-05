#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionObjective.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ObjectiveNotificationManagerWidget.generated.h"

class UIGS_ObjectiveManager;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ObjectiveNotificationManagerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_ObjectiveNotificationManagerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveStateChangedEvent(FIGS_MissionObjective inObjectiveStruct);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStateChanged(int32 inID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveAddedEvent(FIGS_MissionObjective inObjectiveStruct);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveAdded(int32 inID);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindToObjectiveManager();
    
};

