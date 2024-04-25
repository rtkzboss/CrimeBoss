#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCommandType.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetPingRadialSlice.generated.h"

class AIGS_PlayerControllerRoot;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetPingRadialSlice : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoverColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WieldedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WieldedHoverColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_PlayerCommandType PlayerCommandType;
    
public:
    UIGS_WidgetPingRadialSlice();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceUnhover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SliceHover();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SliceClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerPicture(UTexture2D* inTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSliceClicked();
    
};

