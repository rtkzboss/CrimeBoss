#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_WorldWidgetType.h"
#include "IGS_WorldSpaceUserWidget.generated.h"

class UIGS_WorldSpaceWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_WorldSpaceUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WorldWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WorldSpaceWidgetBase* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterToEdgeLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenOccluded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOccluded;
    
    UIGS_WorldSpaceUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetTargeted(bool inTargeted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOccluded(bool inOccluded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProxyTickLastBeforeDormant(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProxyTick(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetTypeChanged(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetedChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnScreenChanged(bool inOnScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFullyFaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFadeDistanceEnd();
    
};

