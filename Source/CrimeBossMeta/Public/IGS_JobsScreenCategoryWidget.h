#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetWithInput.h"
#include "IGS_JobItemSelectedDelegate.h"
#include "IGS_JobsCategoryHoveredDelegate.h"
#include "IGS_JobsCategorySelectDelegate.h"
#include "IGS_JobsCategorySelectNoScrollNoFocusDelegate.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_JobsScreenCategoryWidget.generated.h"

class UHorizontalBox;
class UIGS_JobsItemWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsScreenCategoryWidget : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UHorizontalBox* CategoryContentBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UTextBlock* CategoryNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_JobsItemWidget> JobsItemWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_JobsCategorySelect OnJobsCategorySelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_JobsCategorySelectNoScrollNoFocus OnJobsCategorySelectNoScrollNoFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_JobsCategoryHovered OnJobItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_JobItemSelected OnJobItemSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_JobsItemWidget*> JobItemWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelected;
    
    UIGS_JobsScreenCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void TrySetFocusToFirstJobWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetIsCategorySelected(bool inIsSelected);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJobItemSelected_Internal(UIGS_JobsItemWidget* JobWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnJobItemHovered_Internal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategorySelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryDeselected();
    
    UFUNCTION(BlueprintCallable)
    void InitCategory(const FIGS_MultiplayerJobCategoryRow& categoryData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_JobsItemWidget* GetFirstJobWidget() const;
    
};

