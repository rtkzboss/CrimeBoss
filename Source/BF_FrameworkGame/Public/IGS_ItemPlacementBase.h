#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnGadgetPlacedDelegate.h"
#include "IGS_ItemPlacementBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ItemPlacementBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGadgetPlaced OnGadgetPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGadgetPlaced OnGadgetFinished;
    
    AIGS_ItemPlacementBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePlacement(bool inEnable);
    
};

