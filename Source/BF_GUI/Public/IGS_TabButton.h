#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_TabEventDelegate.h"
#include "IGS_WidgetButtonSimple.h"
#include "IGS_TabButton.generated.h"

class UIGS_FancyText;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_TabButton : public UIGS_WidgetButtonSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ScreenTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_FancyText* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_FancyText* CategoryTitle;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TabEvent OnTabClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TabEvent OnTabFocused;
    
    UIGS_TabButton();

    UFUNCTION(BlueprintCallable)
    void SetIconText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryTitleText(const FText& InText);
    
};

