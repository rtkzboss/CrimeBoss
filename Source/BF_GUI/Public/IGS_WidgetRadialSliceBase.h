#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_Widget.h"
#include "IGS_WidgetRadialSliceBase.generated.h"

class AIGS_PlayerControllerRoot;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetRadialSliceBase : public UIGS_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoverColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
public:
    UIGS_WidgetRadialSliceBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceUnhover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceHover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SliceClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSliceInitialized();
    
};

