#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_GoalWidget.generated.h"

class UIGS_ObjectiveManager;
class UIGS_ObjectiveWidget;
class UIGS_TaskWidgetBase;
class UIGS_TaskWidgetHolder;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_GoalWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText goalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ObjectiveOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveWidget* ActiveObjectiveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TaskWidgetHolder* ActiveSimpleObjectiveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveObjectiveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetHolder> SimpleObjectiveWidgetHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetBase> SimpleObjectiveWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_GoalWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnObjectiveWidget(int32 inID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveObjectiveChanged();
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjective();
    
};

