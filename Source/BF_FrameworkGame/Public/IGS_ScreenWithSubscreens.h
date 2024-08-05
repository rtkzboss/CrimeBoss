#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_ScreenWithSubscreens.generated.h"

class UCommonActivatableWidgetSwitcher;
class UIGS_ScreenWithSubscreens;

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_ScreenWithSubscreens : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* WidgetSwitcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_Screen*> m_ScreensInSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ScreenWithSubscreens* m_ActiveScreenWithSubscreens;
    
public:
    UIGS_ScreenWithSubscreens();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSubscreenChange(FGameplayTag inTag);
    
};

