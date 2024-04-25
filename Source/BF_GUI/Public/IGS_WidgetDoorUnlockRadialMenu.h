#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetDoorUnlockRadialMenu.generated.h"

class AIGS_IntelligentGameCharacter;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetDoorUnlockRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockMethods;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_IntelligentGameCharacter> OwningPlayerCharacter;
    
public:
    UIGS_WidgetDoorUnlockRadialMenu();

    UFUNCTION(BlueprintCallable)
    void InitMenu(FGameplayTagContainer inMethods);
    
    UFUNCTION(BlueprintCallable)
    void ForceRefresh();
    
};

