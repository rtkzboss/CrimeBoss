#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "Styling/SlateBrush.h"
#include "OnPageSelectionChangedEventDelegate.h"
#include "IGS_Paginator.generated.h"

class UButton;
class UHorizontalBox;
class UNamedSlot;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_Paginator : public UIGS_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPageSelectionChangedEvent OnPageSelectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoPagingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartAutpagingOnContruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSwithcingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* ContentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowEndlessScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ActivePageIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivePageIndicatorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InactivePageIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePageIndicatorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PageIndicatorsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* RightArrow;
    
    UIGS_Paginator();

    UFUNCTION(BlueprintCallable)
    void StartAutopaging();
    
    UFUNCTION(BlueprintCallable)
    void SetArrowsVisibility(bool inVisible, bool inCollapse);
    
    UFUNCTION(BlueprintCallable)
    void SelectPage(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetPaginator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostPageSelected(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastPageSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPageSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void InitCarousel(int32 newPageCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAutoPageSwitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetContentWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePage(int32 Direction);
    
};

