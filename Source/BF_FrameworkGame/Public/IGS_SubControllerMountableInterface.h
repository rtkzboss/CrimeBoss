#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_SubControllerMountableInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SubControllerMountableInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_SubControllerMountableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUse(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTurnRate(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTurnMouse(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRightBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPing(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveRight(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveLeft(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveForward(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveBackward(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMountTertiaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMountSecondaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMountQuaternaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMountPrimaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLookUpRate(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLookUpMouse(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownBtn(bool inIsHolding);
    
};

