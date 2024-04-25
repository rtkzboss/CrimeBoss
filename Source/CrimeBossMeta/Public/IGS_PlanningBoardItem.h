#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_PlanningBoardItemConnectionData.h"
#include "META_PlanningBoardItemRow.h"
#include "VirtualCursorTarget.h"
#include "IGS_PlanningBoardItem.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API AIGS_PlanningBoardItem : public AActor, public IVirtualCursorTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PlanningBoardItemRow itemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_PlanningBoardItemStatus Status;
    
    AIGS_PlanningBoardItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStatus(EMETA_PlanningBoardItemStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetItemData(const FMETA_PlanningBoardItemRow& inItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusChanged(EMETA_PlanningBoardItemStatus NewStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_PlanningBoardItemConnectionData> GetConnections() const;
    

    // Fix for true pure virtual functions not being implemented
};

