#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputThumbstickType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "IGS_MenuScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_MenuScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag screenTag;
    
    UIGS_MenuScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestSubscreenChange(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwitchedTo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwitchedFrom();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuInput(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMainScreenSwitch(FGameplayTag inEntireScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnalogInput(EIGS_InputThumbstickType Type, FVector2D Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoBackInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfirmInternal();
    
};

