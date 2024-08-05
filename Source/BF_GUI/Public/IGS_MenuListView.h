#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "IGS_OnListViewIsFocusableChangedDelegate.h"
#include "IGS_OnListViewItemHoverChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuListView.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_MenuListView : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewItemHoverChanged OnListViewItemHoverChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnListViewIsFocusableChanged OnListViewIsFocusableChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ItemWidgetTemplate;
    
    UIGS_MenuListView();

    UFUNCTION(BlueprintCallable)
    void UnhoverListItem(UObject* inItem);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool inFocusable);
    
    UFUNCTION(BlueprintCallable)
    void HoverListItem(UObject* inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetSelectedWidget();
    
    UFUNCTION(BlueprintCallable)
    void DoubleClickListItem(UObject* inItem);
    
    UFUNCTION(BlueprintCallable)
    void ClickListItem(UObject* inItem);
    
};

