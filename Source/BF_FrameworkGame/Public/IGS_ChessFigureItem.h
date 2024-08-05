#pragma once
#include "CoreMinimal.h"
#include "IGS_StaticMeshInventoryItemPickup.h"
#include "IGS_ChessFigureItem.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ChessFigureItem : public AIGS_StaticMeshInventoryItemPickup {
    GENERATED_BODY()
public:
    AIGS_ChessFigureItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetThrowCount(int32 inNewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetThrowCount();
    
};

