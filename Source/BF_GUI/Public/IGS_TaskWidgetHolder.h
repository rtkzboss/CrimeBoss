#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_TaskWidgetHolder.generated.h"

class UHorizontalBox;
class UIGS_ObjectiveManager;
class UIGS_TaskWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_TaskWidgetHolder : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ObjectiveState TaskState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_TaskWidgetBase> TaskWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HolderBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayWidgetAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectiveManager* m_ObjectiveManager;
    
public:
    UIGS_TaskWidgetHolder();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTaskValuesChangedEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskValuesChanged(int32 inID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTaskStateChangedEvent(EIGS_ObjectiveState inState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskStateChanged(int32 inID, EIGS_ObjectiveState inState);
    
};

