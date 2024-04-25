#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_WeaponSubtype.h"
#include "EMETA_ItemQuality.h"
#include "IGS_MeleeWeaponTableRow.h"
#include "IGS_WeaponTableRow.h"
#include "META_BaseObject.h"
#include "Templates/SubclassOf.h"
#include "META_Weapon.generated.h"

class UIGS_WeaponSkinData;
class UMETA_Character;
class UMETA_WeaponInventoryObject;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Weapon : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnseenInShop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AdditionalPercentageOfWeaponPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AdditionalPercentageOfWeaponPriceFromMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_Character* m_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SuccessfulMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> m_TargetWeaponsForUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality m_TargetQualityToUpdateWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DaysInShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_WeaponSkinTag;
    
public:
    UMETA_Weapon();

    UFUNCTION(BlueprintCallable)
    void SetWeaponSkin(FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inNewPrice);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfoByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    bool SetInfo(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId);
    
    UFUNCTION(BlueprintCallable)
    void SetDaysInShop(int32 DaysInShop);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfWeaponPriceFromMods(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfWeaponPrice(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSignatureWeapon(bool& outSignature, EIGS_CharacterID& outSignatureCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeleeWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseDaysInShopByOne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_WeaponTableRow GetWeaponTableRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_WeaponSubtype GetWeaponSubtype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetWeaponSkinAsset(UObject* inWCO) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetWeaponSkin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpgradeCostMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> GetTargetWeaponsForUpgrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetTargetQualityToUpdateWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSuccessfulMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSalePrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_MeleeWeaponTableRow GetMeleeWeaponTableRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_InventorySlot GetInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_WeaponInventoryObject> GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysInShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Character* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBasePrice() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetAdditionalPercentageOfWeaponPriceFromMods();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdditionalPercentageOfWeaponPrice() const;
    
    UFUNCTION(BlueprintCallable)
    void FillTargetWeaponsForUpgrade(UObject* inWCO, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSuccessfulMissions(int32 inChangedBy);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetWeaponForUpgrade(TSubclassOf<UMETA_WeaponInventoryObject> inNewTargerWeapon);
    
};

