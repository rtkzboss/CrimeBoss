#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_WidgetWithInput.h"
#include "ETopNavbarDirection.h"
#include "IGS_TabSelectedEventDelegate.h"
#include "IGS_WidgetTopNavbar.generated.h"

class UHorizontalBox;
class UIGS_TabButton;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetTopNavbar : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TabSelectedEvent OnTabSelectedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TabsOnly;
    
    UIGS_WidgetTopNavbar();

    UFUNCTION(BlueprintCallable)
    void SelectTab(const UIGS_TabButton* inTab);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextTab(ETopNavbarDirection Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabSelected(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_TabButton* GetTabByScreenTag(FGameplayTag inScreenTag) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAllTabs();
    
};

