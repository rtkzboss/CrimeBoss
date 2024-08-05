#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ObjectiveWidget.generated.h"

class UIGS_ObjectiveManager;
class UIGS_TaskWidgetBase;
class UIGS_TaskWidgetHolder;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ObjectiveWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_ObjectiveEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectiveEvent OnObjectivesShown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* TaskBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetHolder> TaskWidgetHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetBase> TaskWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetBase> OrTaskWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayWidgetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ObjectiveState ObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_ObjectiveWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskAdded(int32 inID, int32 inObjectiveID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveTextChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveStateChangedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStateChanged(int32 inID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveHideAndDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeSimpleObjective();
    
};

