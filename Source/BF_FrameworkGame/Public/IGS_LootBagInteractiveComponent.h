#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagItemHolder.h"
#include "IGS_LootBagSingleItem.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_LootBagInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootBagInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    FIGS_LootBagItemHolder mR_ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LootBagSingleItem> ItemsToAdd;
    
public:
    UIGS_LootBagInteractiveComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool PutItemToInventory(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCantBePicked();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootBagSingleItem> GetItems();
    
};

