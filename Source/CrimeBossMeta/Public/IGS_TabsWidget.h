#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetWithInput.h"
#include "IGS_OnTabSelectedEventDelegate.h"
#include "IGS_TabsWidget.generated.h"

class UHorizontalBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_TabsWidget : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InputEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TabsHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> Tabs;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTabSelectedEvent OnTabSelected;
    
    UIGS_TabsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTabIndex(int32 inIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInputEnabled(bool inEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabSelected_Internal(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabAdded(UUserWidget* tabWidget, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeTab(int32 Direction);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTab(UUserWidget* inTab);
    
};

