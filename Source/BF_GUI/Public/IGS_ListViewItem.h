#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_OnListViewItemEventDelegate.h"
#include "IGS_ListViewItem.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ListViewItem : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoldTicksPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldableOnlyWhenSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemHoldStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemHoldCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemHoldFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemEvent OnItemFocused;
    
    UIGS_ListViewItem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHoldTick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHoldStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHoldFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHoldCancelled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDoubleClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* GetItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsSelected();
    
};

