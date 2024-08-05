#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetWeaponRadialMenu.generated.h"

class AIGS_IntelligentGameCharacter;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_ListInventory;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetWeaponRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_ListInventory> OwningPlayerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_IntelligentGameCharacter> OwningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_CharacterWieldablesHolderComponent> WieldableHolder;
    
public:
    UIGS_WidgetWeaponRadialMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupInventory(UIGS_ListInventory* inInventory);
    
};

