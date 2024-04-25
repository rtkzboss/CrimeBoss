#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_LootBagsManager.generated.h"

class AIGS_LootBagPickup;
class UIGS_LootBagsManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootBagsManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootBagPickup*> m_LootBags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootBagPickup*> m_GadgetBags;
    
public:
    UIGS_LootBagsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UIGS_LootBagsManager* GetLootBagsManager(UObject* inWCO);
    
};

