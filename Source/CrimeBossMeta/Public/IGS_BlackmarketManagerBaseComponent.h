#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_BlackmarketManangerInitializedDelegate.h"
#include "IGS_BlackmarketManagerBaseComponent.generated.h"

class UMETA_Character;
class UMETA_Equipment;
class UMETA_Weapon;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_BlackmarketManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BlackmarketManangerInitialized OnManagerInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerInitialized;
    
public:
    UIGS_BlackmarketManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Weapon*> GetWeaponsMarketPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Weapon* GetWeaponByTag(FGameplayTag inWeaponTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Equipment*> GetEquipmentMarketPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Equipment* GetEquipmentByTag(FGameplayTag inEquipmentTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Character*> GetCharactersMarketPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Character* GetCharacterByTag(FGameplayTag inCharacterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BuyItem(FGameplayTag itemTag, FGameplayTag ScreenTag);
    
};

