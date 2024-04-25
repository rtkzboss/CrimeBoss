#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_Character.h"
#include "META_PerkData.h"
#include "META_BossCharacter.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_BossCharacter : public UMETA_Character {
    GENERATED_BODY()
public:
    UMETA_BossCharacter();

    UFUNCTION(BlueprintCallable)
    void SetPerkInSlot(int32 inSlot, FGameplayTag inTagID);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSkinTag(FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PerkData GetPerkInSlot(int32 inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEquippedSecondaryWeaponID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEquippedPrimaryWeaponID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCharacterSkinTag() const;
    
};

