#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetWithInput.h"
#include "EIGS_HUDVisibilityMode.h"
#include "IGS_HUDSubwidgetBase.generated.h"

class AIGS_PlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_HUDSubwidgetBase : public UIGS_WidgetWithInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bShowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bCurrentlyRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HUDVisibilityMode VisibilityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenOnStartup;
    
    UIGS_HUDSubwidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindPawnEvent(AIGS_PlayerCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetRelevancy(bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityMode(EIGS_HUDVisibilityMode inVisibilityMode);
    
    UFUNCTION(BlueprintCallable)
    void SetShowWidget(bool inEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestFocus();
    
    UFUNCTION(BlueprintCallable)
    void RefreshShowWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWidgetAnimation(bool InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewPawnEvent(AIGS_PlayerCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool IsRelevant();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAndDestroy();
    
    UFUNCTION(BlueprintCallable)
    void ForceShowWidget(bool inShow);
    
    UFUNCTION(BlueprintCallable)
    void ForceHideWidget(bool inHide);
    
};

