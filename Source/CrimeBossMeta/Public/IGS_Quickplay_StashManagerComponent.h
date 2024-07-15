#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_StashManagerBaseComponent.h"
#include "IGS_Quickplay_StashManagerComponent.generated.h"

class UMETA_CharacterSkin;
class UMETA_Equipment;
class UMETA_Perk;
class UMETA_Weapon;
class UMETA_WeaponSkin;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_StashManagerComponent : public UIGS_StashManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> PrimaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> SecondaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_WeaponSkin*> WeaponSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Perk*> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_CharacterSkin*> BossCharacterSkins;
    
public:
    UIGS_Quickplay_StashManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponSkin(UMETA_Weapon* inWeapon, FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItems(FGameplayTagContainer inItemTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponSubvariant(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemOwned(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_WeaponSkin* GetWeaponSkinByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Weapon*> GetWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Weapon* GetWeaponByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Weapon*> GetSecondaryWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Weapon*> GetPrimaryWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Perk*> GetPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Perk* GetPerkByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Equipment* GetEquipmentByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Equipment*> GetEquipment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_CharacterSkin*> GetBossCharacterSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_CharacterSkin* GetBossCharacterSkinByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddItems(FGameplayTagContainer inItemTags);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(FGameplayTag inItem);
    
};

