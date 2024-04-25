#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_BlackmarketManagerBaseComponent.h"
#include "IGS_Quickplay_BlackMarketManagerComponent.generated.h"

class UMETA_Character;
class UMETA_CharacterSkin;
class UMETA_Equipment;
class UMETA_Perk;
class UMETA_Weapon;
class UMETA_WeaponSkin;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_BlackMarketManagerComponent : public UIGS_BlackmarketManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> CharactersPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> WeaponsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> EquipmentPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Perk*> PerksPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_CharacterSkin*> BossCharacterSkinsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_WeaponSkin*> WeaponSkinsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;
    
public:
    UIGS_Quickplay_BlackMarketManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponSkinBuyAnalytics(UMETA_WeaponSkin* inWeaponSkin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponBuyAnalytics(UMETA_Weapon* inWeapon);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveItem(FGameplayTag inItemTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PerkBuyAnalytics(UMETA_Perk* inPerk);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemInPool(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkinsMarketPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_WeaponSkin* GetWeaponSkinByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Perk*> GetPerksMarketPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Perk* GetPerkByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_CharacterSkin*> GetBossCharacterSkinsMarketPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_CharacterSkin* GetBossCharacterSkinByTag(FGameplayTag inItemTag) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipmentBuyAnalytics(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterBuyAnalytics(UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BossCharacterSkinBuyAnalytics(UMETA_CharacterSkin* inBossCharacterSkin);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItemToPool(FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintCallable)
    void AddItemsToPool(FGameplayTagContainer inItemTags);
    
};

