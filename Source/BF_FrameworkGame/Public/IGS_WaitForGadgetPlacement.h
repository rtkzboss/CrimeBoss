#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnGadgetPlacedDelegate.h"
#include "IGS_WaitForGadgetPlacement.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_ItemPlacementBase;
class UIGS_WaitForGadgetPlacement;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WaitForGadgetPlacement : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGadgetPlaced OnGadgetPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGadgetPlaced OnGadgetFinished;
    
    UIGS_WaitForGadgetPlacement();

    UFUNCTION(BlueprintCallable)
    static UIGS_WaitForGadgetPlacement* WaitForGadgetPlacement(AIGS_ItemPlacementBase* GadgetActor, bool EnablePlacement);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemPlacedInternal(AIGS_ItemPlacementBase* inPlacementActor, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnActionReturnedInternal(AIGS_ItemPlacementBase* inPlacementActor, AIGS_GameCharacterFramework* inInstigator);
    
};

