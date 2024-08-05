#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetDoorUnlockRadialSlice.generated.h"

class UIGS_GUIController;
class UIGS_InventoryObjectFramework;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetDoorUnlockRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WieldedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WieldedHoverColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> RequiredItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GUIController* GUIController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SliceImage;
    
public:
    UIGS_WidgetDoorUnlockRadialSlice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUnlockMethod_Internal(FGameplayTag inMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImageInternal(const TSoftObjectPtr<UTexture2D>& inTexture);
    
};

